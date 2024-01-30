@class NSString, NSURL;
@protocol SXFontAttributes;

@interface SXFontResource : SXResource <SXFontResource>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) id<SXFontAttributes> fontAttributes;

- (id)fontAttributesWithValue:(id)a0 withType:(int)a1;

@end
