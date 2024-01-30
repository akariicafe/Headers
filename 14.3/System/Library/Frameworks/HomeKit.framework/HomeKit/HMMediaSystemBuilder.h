@class NSUUID, NSString, HMHome, HMMediaSystem, HMFActivity, HMMutableArray, NSArray, _HMContext, HMFUnfairLock;

@interface HMMediaSystemBuilder : NSObject <HMFLogging> {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) _HMContext *context;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *mediaSystemUUID;
@property (retain, nonatomic) NSString *builderSessionID;
@property (readonly, weak, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMMediaSystem *mediaSystem;
@property (retain, nonatomic) HMMutableArray *componentsArray;
@property (readonly) HMFActivity *activity;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)isStereoPairingSupportedForAccessories:(id)a0;
+ (BOOL)supportsMediaSystem:(id)a0;
+ (BOOL)canSupportMediaSystem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)commitWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)_initializeContext;
- (void)_commitWithCompletionHandler:(id /* block */)a0;
- (void)_callCompletion:(id /* block */)a0 builderSessionID:(id)a1 error:(id)a2 response:(id)a3;
- (id)initWithMediaSystem:(id)a0;
- (id)logIdentifier;

@end
