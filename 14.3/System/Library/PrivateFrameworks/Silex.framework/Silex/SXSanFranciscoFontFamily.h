@class NSString, NSSet;

@interface SXSanFranciscoFontFamily : NSObject <SXFontFamily>

@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSSet *fontFaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fontFaceWithAttributes:(id)a0 size:(long long)a1;

@end
