@class NSString, NSMutableSet;
@protocol NRMutableStateParentDelegate;

@interface NRMutableStateBase : NSObject <NRMutableStateProtocol> {
    NSMutableSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<NRMutableStateParentDelegate> parentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enclosedClassTypes;
+ (id)classTypes;
+ (id)diffFrom:(id)a0 to:(id)a1;

- (id)addObserverQueue:(id)a0 withBlock:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObserver:(id)a0;
- (id)applyDiff:(id)a0 upOnly:(BOOL)a1 notifyParent:(BOOL)a2 unconditional:(BOOL)a3;
- (void)notifyObserversWithDiff:(id)a0;
- (id)applyDiff:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)notifyParentWithDiff:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
