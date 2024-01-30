@class NSString;
@protocol FBApplicationTerminationAssertionServiceDelegate;

@interface FBApplicationTerminationAssertionService : NSObject <BKSTerminationAssertionObserver>

@property (weak, nonatomic) id<FBApplicationTerminationAssertionServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_efficacyForReason:(id)a0;
- (void)_notifyDelegateOfAcquisitionForBundleID:(id)a0 efficacy:(unsigned long long)a1;
- (void)_notifyDelegateOfRelinquishForBundleID:(id)a0;
- (id)_reasonForEfficacy:(unsigned long long)a0;
- (void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)a0 forBundleIdentifier:(id)a1;
- (id)terminationAssertionsForBundleID:(id)a0;
- (id)terminationAssertionsForBundleID:(id)a0 withReason:(id)a1;

@end
