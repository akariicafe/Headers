@interface GKRecoveryAttempter : NSObject {
    id /* block */ _attemptRecovery;
}

+ (id)recoveryAttempterUsingHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;

@end
