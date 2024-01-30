@class NSString;
@protocol FBApplicationTerminationAssertionServiceDelegate;

@interface FBApplicationTerminationAssertionService : NSObject <BKSTerminationAssertionObserver>

@property (weak, nonatomic) id<FBApplicationTerminationAssertionServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)a0 forBundleIdentifier:(id)a1;
- (id)_reasonForEfficacy:(unsigned long long)a0;
- (unsigned long long)_efficacyForReason:(id)a0;
- (void)_notifyDelegateOfRelinquishForBundleID:(id)a0;
- (void)_notifyDelegateOfAcquisitionForBundleID:(id)a0 efficacy:(unsigned long long)a1;
- (id)terminationAssertionsForBundleID:(id)a0;
- (id)terminationAssertionsForBundleID:(id)a0 withReason:(id)a1;

@end
