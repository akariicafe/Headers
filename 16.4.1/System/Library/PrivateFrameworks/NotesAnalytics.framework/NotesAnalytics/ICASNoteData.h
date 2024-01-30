@class NSString, ICASNoteType, NSNumber;

@interface ICASNoteData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *noteID;
@property (readonly, nonatomic) ICASNoteType *noteType;
@property (readonly, nonatomic) NSNumber *isScrapPaper;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithNoteID:(id)a0 noteType:(id)a1 isScrapPaper:(id)a2;

@end
