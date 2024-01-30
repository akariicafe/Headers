@class NSUUID, NSString;

@interface TIContactManager : NSObject <TIContactManaging>

@property (readonly, copy, nonatomic) NSUUID *contactCollectionUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singletonInstance;
+ (id)sharedTIContactManager;
+ (void)setSharedTIContactManager:(id)a0;

- (void)unload;
- (void)handleMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void)getOnce:(id /* block */)a0;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeContactObserver:(id /* block */)a0;
- (void)keyboardActivityDidTransition:(id)a0;

@end
