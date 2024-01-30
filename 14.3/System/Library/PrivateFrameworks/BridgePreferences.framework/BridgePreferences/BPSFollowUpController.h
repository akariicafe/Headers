@interface BPSFollowUpController : NSObject

+ (id)_currentDevice;
+ (id)baseDomainIdentifier;
+ (void)addFollowUpForIdentifier:(id)a0 withAttributes:(id)a1 withCompletion:(id /* block */)a2;
+ (void)removeFollowUpForIdentifier:(id)a0 withCompletion:(id /* block */)a1;
+ (void)markSkippedSetupPaneClassForCurrentDevice:(Class)a0;
+ (void)markSkippedSetupPaneClass:(Class)a0 forDevice:(id)a1;
+ (void)removeSkippedPaneClass:(Class)a0 forDevice:(id)a1;
+ (id)skippedSetupPaneClassesForDevice:(id)a0;
+ (id)_domainAccessorForDevice:(id)a0;
+ (void)removeSkippedPaneClassForCurrentDevice:(Class)a0;
+ (id)skippedSetupPaneClassesForCurrentDevice;

@end
