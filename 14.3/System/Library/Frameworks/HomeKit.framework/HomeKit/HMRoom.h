@class HMFUnfairLock, NSUUID, _HMContext, NSString, NSArray, HMApplicationData, HMHome;

@interface HMRoom : NSObject <NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMHome *home;
@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *accessories;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (retain, nonatomic) HMApplicationData *applicationData;

- (void)setName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_unconfigure;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateRoomName:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
