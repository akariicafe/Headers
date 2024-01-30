@interface WFShortcutsSecuritySettings : NSObject

+ (BOOL)areScriptingActionsEnabled;
+ (id)scripingActionDisabledErrorWithActionName:(id)a0;
+ (BOOL)allowsSharingLargeAmountsOfData;
+ (BOOL)allowsDeletingWithoutConfirmation;
+ (BOOL)allowsDeletingLargeAmountsOfData;

@end
