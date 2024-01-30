@class NSString, NSDictionary;
@protocol SXFontAttributes;

@interface SXSanFranciscoFontFace : NSObject <SXFontFace>

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) id<SXFontAttributes> fontAttributes;
@property (readonly, nonatomic) NSDictionary *fontDescriptorAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFontName:(id)a0 fontAttributes:(id)a1 fontDescriptorAttributes:(id)a2;

@end
