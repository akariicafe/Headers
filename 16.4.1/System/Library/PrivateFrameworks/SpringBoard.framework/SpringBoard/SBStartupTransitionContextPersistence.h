@class SBBootDefaults;

@interface SBStartupTransitionContextPersistence : NSObject {
    SBBootDefaults *_bootDefaults;
    BOOL _loginSession;
}

- (void).cxx_destruct;
- (id)initWithBootDefaults:(id)a0 loginSession:(BOOL)a1;
- (id)readTransitionContext;
- (void)saveContext:(id)a0;

@end
