@class NSString, SXSanFranciscoFontFamily;

@interface SXSanFranciscoFontFamilyProvider : NSObject <SXFontFamilyProvider>

@property (readonly, nonatomic) SXSanFranciscoFontFamily *family;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)fontFamilies;

@end
