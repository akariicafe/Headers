@class NSString;

@interface UIDeviceAppearanceContainer : NSObject <_UIAppearanceContainer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (id)_appearanceGuideClass;
- (id)_appearanceContainer;

@end
