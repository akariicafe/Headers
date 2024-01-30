@class WFColor, NSString, WFIcon, WFImage, NSData;

@interface WFContextualActionIcon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFIcon *wfIcon;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *renderedSymbolSystemName;
@property (readonly, nonatomic) WFColor *renderedSymbolBackgroundColor;
@property (readonly, nonatomic) WFImage *renderedImage;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) double imageScale;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier;

+ (id)imageNamed:(id)a0;
+ (id)iconWithApplicationBundleIdentifier:(id)a0;
+ (id)iconWithImageData:(id)a0 scale:(double)a1;
+ (id)iconWithSystemName:(id)a0;
+ (id)iconWithRenderedSymbolOfSystemName:(id)a0 backgroundColor:(id)a1;
+ (id)iconWithImageName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithApplicationBundleIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImageName:(id)a0;
- (id)initWithSystemName:(id)a0;
- (id)initWithRenderedSymbolOfSystemName:(id)a0 backgroundColor:(id)a1;
- (id)initWithImageData:(id)a0 scale:(double)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
