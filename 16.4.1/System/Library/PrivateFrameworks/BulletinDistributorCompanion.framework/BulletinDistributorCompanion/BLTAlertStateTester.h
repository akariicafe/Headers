@interface BLTAlertStateTester : NSObject

@property (copy, nonatomic) id /* block */ sectionInfoRetriever;
@property BOOL testCheckedSubsections;

- (void).cxx_destruct;
- (unsigned long long)_blockingReasonForSectionInfo:(id)a0 isCritical:(BOOL)a1;
- (BOOL)isScreenTimeBlockedForBundleIdentifier:(id)a0 ignoresDowntime:(BOOL)a1;
- (unsigned long long)willNanoPresentNotificationForSectionInfo:(id)a0 subsectionIDs:(id)a1 isWristDetectDisabled:(BOOL)a2 hasSectionIDOptedOutOfCoordination:(BOOL)a3 hasSectionIDOptedForwardOnly:(BOOL)a4 ignoresDowntime:(BOOL)a5 isCritical:(BOOL)a6;

@end
