@class NSArray, NSString;

@interface SXSystemFontFamilyProvider : NSObject <SXFontFamilyProvider>

@property (readonly, nonatomic) NSArray *fonts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)fontFamilies;
- (id)initWithFontMetaData:(id)a0;
- (id)fontsForMetadata:(id)a0;

@end
