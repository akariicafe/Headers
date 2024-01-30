@class NSString, NSSet;

@interface SXFontFamily : NSObject <SXFontFamily>

@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSSet *fontFaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
