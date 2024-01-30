@class NSMutableDictionary;

@interface SBKeyboardSuppressionManager : NSObject {
    NSMutableDictionary *_keyboardSuppressionAssertions;
}

+ (id)sharedInstance;

- (void)startSuppressingKeyboardWithReason:(id)a0 predicate:(id /* block */)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)acquireKeyboardSuppressionAssertionWithReason:(id)a0 predicate:(id /* block */)a1;
- (void)_setKeyboardSuppressed:(BOOL)a0 forReason:(id)a1 withPredicate:(id /* block */)a2;
- (void)stopSuppressingKeyboardWithReason:(id)a0;

@end
