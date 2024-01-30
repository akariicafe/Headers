@class NSString, CKRecordID, NSArray;

@interface WFMutableGalleryBanner : WFGalleryBanner

@property (copy, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) CKRecordID *detailPage;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) CKRecordID *base;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (copy, nonatomic) NSArray *supportedIdioms;

- (void).cxx_destruct;

@end
