@class NSString, NSDictionary;
@protocol SXFontAttributes;

@interface SXFontFace : NSObject <SXFontFace>

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) id<SXFontAttributes> fontAttributes;
@property (readonly, nonatomic) NSDictionary *fontDescriptorAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributes;
- (void).cxx_destruct;
- (id)initWithFontName:(id)a0 fontAttributes:(id)a1;

@end
