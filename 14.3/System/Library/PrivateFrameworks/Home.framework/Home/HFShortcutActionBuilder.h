@interface HFShortcutActionBuilder : HFActionBuilder

+ (Class)homeKitRepresentationClass;

- (BOOL)isAffectedByEndEvents;
- (id)commitItem;
- (id)performValidation;
- (id)createNewAction;

@end
