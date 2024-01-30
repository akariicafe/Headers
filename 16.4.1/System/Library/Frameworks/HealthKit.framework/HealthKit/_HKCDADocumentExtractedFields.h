@class NSString, NSDate;

@interface _HKCDADocumentExtractedFields : NSObject

@property (readonly, copy, nonatomic) NSDate *extractedDate;
@property (readonly, copy, nonatomic) NSString *extractedTitle;
@property (readonly, copy, nonatomic) NSString *extractedPatient;
@property (readonly, copy, nonatomic) NSString *extractedAuthorName;
@property (readonly, copy, nonatomic) NSString *extractedCustodianName;

- (void).cxx_destruct;
- (id)_firstFrom:(id)a0 tagRule:(id)a1 nilOnFail:(BOOL)a2;
- (id)_parseCDADate:(id)a0;
- (id)_personNameFrom:(id)a0 familyTagRule:(id)a1 givenTagRule:(id)a2 nilOnFail:(BOOL)a3;
- (void)extractHeaderFieldsFromDocumentData:(id)a0;
- (id)initWithDocumentData:(id)a0;

@end
