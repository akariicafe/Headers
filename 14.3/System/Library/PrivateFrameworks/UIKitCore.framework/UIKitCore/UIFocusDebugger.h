@interface UIFocusDebugger : NSObject

+ (id)help;
+ (id)status;
+ (id)_verboseStatus;
+ (id)checkFocusabilityForItem:(id)a0;
+ (id)_statusForFocusSystem:(id)a0 includeFocusSystem:(BOOL)a1;
+ (id)_legacy_checkFocusabilityForView:(id)a0;
+ (id)simulateFocusUpdateRequestFromEnvironment:(id)a0;
+ (id)_ancestryForEnvironment:(id)a0;

@end
