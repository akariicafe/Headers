@class NSMutableArray;

@interface HMDAnalyticsPredicateData : HMFObject {
    BOOL _containsCalendarTime;
    BOOL _containsCharacteristicValue;
    BOOL _containsSignificantTime;
    BOOL _containsSignificantTimeOffset;
    NSMutableArray *_presenceEvents;
}

- (id)init;
- (void).cxx_destruct;

@end
