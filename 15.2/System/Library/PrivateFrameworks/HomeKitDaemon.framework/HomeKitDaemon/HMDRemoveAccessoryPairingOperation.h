@class NSString;

@interface HMDRemoveAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)predicate;

- (id)logIdentifier;
- (id)initWithAccessory:(id)a0 identityToRemove:(id)a1;
- (BOOL)mainWithError:(id *)a0;

@end
