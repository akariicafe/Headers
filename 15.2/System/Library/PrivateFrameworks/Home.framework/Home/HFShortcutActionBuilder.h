@interface HFShortcutActionBuilder : HFActionBuilder

+ (Class)homeKitRepresentationClass;

- (id)performValidation;
- (id)createNewAction;
- (id)commitItem;
- (BOOL)isAffectedByEndEvents;

@end
