@class NSMutableSet;
@protocol RBClientInheritanceManagerDelegate;

@interface RBClientInheritanceManager : NSObject {
    NSMutableSet *_inheritances;
    NSMutableSet *_queuedGainedInheritances;
    NSMutableSet *_queuedLostInheritances;
    BOOL _awaitingAck;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<RBClientInheritanceManagerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInheritances:(id)a0 delegate:(id)a1;
- (void)setInheritances:(id)a0;

@end
