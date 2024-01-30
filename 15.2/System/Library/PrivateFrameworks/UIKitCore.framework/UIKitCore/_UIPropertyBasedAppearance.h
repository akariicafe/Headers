@class NSDictionary;

@interface _UIPropertyBasedAppearance : _UIAppearance

@property (retain, nonatomic, setter=_setPropertiesToMatch:) NSDictionary *_propertiesToMatch;

+ (id)_appearanceObjectKeyForProperties:(id)a0;
+ (id)_appearanceMatchingProperties:(id)a0 forClass:(Class)a1 withContainerList:(id)a2;

- (BOOL)_isValidAppearanceForCustomizableObject:(id)a0;
- (BOOL)_isRecordingInvocations;
- (void)dealloc;

@end
