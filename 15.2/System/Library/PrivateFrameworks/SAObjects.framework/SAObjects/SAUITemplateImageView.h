@class SAUIImageResource, NSArray, NSString;

@interface SAUITemplateImageView : SAUITemplateBaseItem <SAUITemplateMonogrammable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float alpha;
@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) double imagePointHeight;
@property (nonatomic) double imagePointWidth;
@property (copy, nonatomic) NSArray *monogramName;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSArray *themeImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageView;
+ (id)imageViewWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
