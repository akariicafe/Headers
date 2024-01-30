@interface UIFocusDebugger : NSObject

+ (id)help;
+ (id)_statusForFocusSystem:(id)a0 scene:(id)a1 includeFocusSystemLog:(BOOL)a2 includeSceneLog:(BOOL)a3;
+ (id)status;
+ (id)checkFocusabilityForItem:(id)a0;
+ (id)_ancestryForEnvironment:(id)a0;
+ (id)_legacy_checkFocusabilityForView:(id)a0;
+ (id)simulateFocusUpdateRequestFromEnvironment:(id)a0;
+ (id)checkFocusGroupTreeForEnvironment:(id)a0;
+ (id)_verboseStatus;

@end
