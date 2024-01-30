@class HMFUnfairLock, NSString, _HMContext, HMMutableArray, NSUUID, NSArray, HMHome;

@interface HMZone : NSObject <NSSecureCoding, HMObjectMerge> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (retain, nonatomic) HMMutableArray *currentRooms;
@property (readonly, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *rooms;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)setName:(id)a0;
- (void)setUuid:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_unconfigure;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_recomputeAssistantIdentifier;
- (void)recomputeAssistantIdentifier;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateName:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0 uuid:(id)a1;
- (id)roomWithUUID:(id)a0;
- (void)_removeRoom:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeRoom:(id)a0 completionHandler:(id /* block */)a1;
- (void)addRoom:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addRoom:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeRoom:(id)a0;

@end
