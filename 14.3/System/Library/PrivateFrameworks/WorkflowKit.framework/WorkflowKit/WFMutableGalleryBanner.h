@class NSString, CKRecordID;

@interface WFMutableGalleryBanner : WFGalleryBanner

@property (copy, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) CKRecordID *detailPage;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) CKRecordID *base;
@property (copy, nonatomic) NSString *persistentIdentifier;

- (void).cxx_destruct;

@end
