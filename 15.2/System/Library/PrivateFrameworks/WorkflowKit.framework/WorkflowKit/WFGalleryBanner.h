@class NSString, CKRecordID, NSArray, WFFileRepresentation, NSData;

@interface WFGalleryBanner : NSObject <WFCloudKitItem, NSMutableCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CKRecordID *detailPage;
@property (retain, nonatomic) WFFileRepresentation *iphone2xImageFile;
@property (retain, nonatomic) WFFileRepresentation *iphone3xImageFile;
@property (retain, nonatomic) WFFileRepresentation *ipad2xImageFile;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) CKRecordID *base;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) NSArray *supportedIdioms;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)recordType;
+ (id)propertyForSize:(long long)a0;
+ (double)scaleForBannerSize:(long long)a0;
+ (struct CGSize { double x0; double x1; })pointSizeForBannerSize:(long long)a0;
+ (struct CGSize { double x0; double x1; })pixelSizeForBannerSize:(long long)a0;

@end
