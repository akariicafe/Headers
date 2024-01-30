@class NSString, NSMutableArray, NSDate;

@interface ICDocCamDocumentInfoCollection : NSObject

@property (readonly, nonatomic) long long docCamPDFVersion;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *docInfos;

- (id)init;
- (void).cxx_destruct;
- (void)bumpModificationDate;

@end
