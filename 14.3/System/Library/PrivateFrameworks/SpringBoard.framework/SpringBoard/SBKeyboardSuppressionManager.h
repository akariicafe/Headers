@class NSMutableDictionary;

@interface SBKeyboardSuppressionManager : NSObject {
    NSMutableDictionary *_keyboardSuppressionAssertions;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)stopSuppressingKeyboardWithReason:(id)a0;
- (void)startSuppressingKeyboardWithReason:(id)a0 predicate:(id /* block */)a1;
- (void)_setKeyboardSuppressed:(BOOL)a0 forReason:(id)a1 withPredicate:(id /* block */)a2;

@end
