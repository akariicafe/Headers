@class PKImage;

@interface PKPassPreviewImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *iconImage;
@property (retain, nonatomic) PKImage *notificationIconImage;
@property (retain, nonatomic) PKImage *rawIcon;

+ (long long)imageSetType;
+ (BOOL)supportsSecureCoding;
+ (id)archiveName;
+ (unsigned int)currentVersion;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
