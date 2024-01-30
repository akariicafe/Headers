@interface AAViewingSessionManager : NSObject <AAViewingSessionManagerType> {
    void /* unknown type, empty encoding */ sessions;
    void /* unknown type, empty encoding */ activeSession;
}

- (id)init;
- (void).cxx_destruct;
- (void)endActiveViewingSession;
- (void)endViewingSessionForContentIdentifier:(id)a0;
- (void)removeObject:(id)a0 forContentIdentifier:(id)a1;
- (id)viewingSessionForContentIdentifier:(id)a0 object:(id)a1 onEnd:(id /* block */)a2;

@end
