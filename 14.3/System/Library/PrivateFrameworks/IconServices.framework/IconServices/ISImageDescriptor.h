@class NSString;
@protocol NSCopying;

@interface ISImageDescriptor : NSObject <NSSecureCoding, ISImageDescriptor, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGSize { double x0; double x1; } sanitizedSize;
@property (readonly) double sanitizedScale;
@property (retain) NSString *preferedResourceName;
@property BOOL preferExtendedColorResources;
@property unsigned long long languageDirection;
@property (retain) id<NSCopying> imageCacheKey;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long variantOptions;
@property (nonatomic) unsigned long long badgeOptions;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) unsigned long long shape;
@property (readonly, nonatomic) double continuousCornerRadius;
@property (nonatomic) BOOL shouldApplyMask;
@property (nonatomic) BOOL drawBorder;
@property (nonatomic) BOOL drawBadge;
@property (nonatomic) BOOL templateVariant;
@property (nonatomic) BOOL selectedVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)icnsImageDescriptors;
+ (id)imageDescriptorNamed:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)imageCacheKey;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)encodeWithCoder:(id)a0;

@end
