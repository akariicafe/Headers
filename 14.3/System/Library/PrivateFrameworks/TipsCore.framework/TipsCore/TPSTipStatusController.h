@class NSDictionary, NSMutableDictionary, NSUserDefaults;

@interface TPSTipStatusController : NSObject <NSCopying> {
    BOOL _isDirty;
}

@property (retain, nonatomic) NSMutableDictionary *identifierToTipStatusMap;
@property (retain, nonatomic) NSUserDefaults *appGroupDefaults;
@property (readonly, nonatomic) NSDictionary *tipStatusMap;

- (void)updateHintWouldHaveBeenDisplayedDateForIdentifier:(id)a0 value:(BOOL)a1;
- (BOOL)isContentNeverVisibleForIdentifier:(id)a0;
- (void)updatePreconditionMatchedForIdentifier:(id)a0 value:(BOOL)a1;
- (void)addHintDisplayedForIdentifier:(id)a0 context:(id)a1;
- (id)init;
- (void)updatePreconditionMatchedForIdentifiers:(id)a0 value:(BOOL)a1;
- (BOOL)isEligibilityTrackingNeedsRestartForIdentifier:(id)a0;
- (BOOL)isPreconditionMatchedForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)hintEligibleDateForIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isTipAppDisplayEligibleForIdentifier:(id)a0;
- (void)updateExpiredForIdentifier:(id)a0 value:(BOOL)a1;
- (id)variantIdentifierForIdentifier:(id)a0;
- (void)updatevariantIdentifierForIdentifier:(id)a0 value:(id)a1;
- (void)updateHintDismissedForIdentifier:(id)a0 value:(BOOL)a1;
- (BOOL)isTriggerTrackingEligibleForIdentifier:(id)a0 checkForPrecondition:(BOOL)a1 checkForEligibleDate:(BOOL)a2;
- (void)addHintNotDisplayedDueToFrequencyControlDateForIdentifier:(id)a0;
- (unsigned long long)displayTypeForIdentifier:(id)a0;
- (BOOL)isLockScreenHintDisplayEligibleForIdentifier:(id)a0;
- (BOOL)isHintDismissedForIdentifier:(id)a0;
- (int)hintDisplayedCountForIdentifier:(id)a0;
- (id)hintWouldHaveBeenDisplayedDateForIdentifier:(id)a0;
- (BOOL)isContextualInfoLifetimeExpiredForIdentifier:(id)a0;
- (BOOL)isContentViewedForIdentifier:(id)a0;
- (void)addDesiredOutcomePerformedDateForIdentifier:(id)a0 date:(id)a1;
- (void)removeCacheData;
- (id)_tipStatusForIdentifier:(id)a0 addIfMissing:(BOOL)a1;
- (void)updateDisplayTypeForIdentifier:(id)a0 value:(unsigned long long)a1;
- (BOOL)isHintInelgibileForReason:(long long)a0 identifier:(id)a1;
- (void)updateHintEligibleDateForIdentifier:(id)a0 value:(BOOL)a1;
- (id)statusForIdentifier:(id)a0;
- (void)removeAllTipStatus;
- (id)firstHintDisplayDateForIdentifier:(id)a0;
- (BOOL)isHintMaxDurationExcceededForIdentifier:(id)a0;
- (void)updateCacheData;
- (BOOL)isHintInelgibileForIdentifier:(id)a0;
- (BOOL)isHintDisplayedForIdentifier:(id)a0;
- (BOOL)isDesiredOutcomeTrackingEligibleForIdentifier:(id)a0;
- (BOOL)isTriggerTrackingEligibleForIdentifier:(id)a0;
- (id)hintNotDisplayedDueToFrequencyControlDatesForIdentifier:(id)a0;
- (void)updateHintInelgibileForIdentifier:(id)a0 value:(long long)a1;
- (BOOL)isExpiredForIdentifier:(id)a0;
- (id)lastDisplayContextForIdentifier:(id)a0;
- (long long)hintInelgibileReasonForIdentifier:(id)a0;
- (void)updateDateForTriggerRestartTrackingForIdentifier:(id)a0 date:(id)a1;
- (id)reenrollPreconditionChangeContent;
- (id)debugDescription;
- (void)_reloadCacheData;
- (void)updateContentViewedForIdentifier:(id)a0 value:(BOOL)a1;
- (void)syncWithIdentifiers:(id)a0;
- (id)tipStatusMap;
- (BOOL)isDesiredOutcomePerformedForIdentifier:(id)a0;
- (id)initWithAppGroupDefaults:(id)a0;
- (id)reenrollHoldoutContent;
- (id)contentViewedDateForIdentifier:(id)a0;
- (id)dateForTriggerRestartTrackingForIdentifier:(id)a0;

@end
