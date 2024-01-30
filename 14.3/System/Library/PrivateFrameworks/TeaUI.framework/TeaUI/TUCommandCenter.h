@interface TUCommandCenter : NSObject <TUCommandCenterType> {
    void /* unknown type, empty encoding */ commandCenter;
}

- (void)addContextProvider:(id)a0 forCommand:(id)a1 completion:(id /* block */)a2;
- (void)executeCommand:(id)a0;
- (id)init;
- (void)removeContextProvider:(id)a0 forCommand:(id)a1;
- (void).cxx_destruct;
- (long long)stateForCommand:(id)a0;
- (BOOL)canExecuteCommand:(id)a0;
- (void)removeContextProvider:(id)a0;

@end
