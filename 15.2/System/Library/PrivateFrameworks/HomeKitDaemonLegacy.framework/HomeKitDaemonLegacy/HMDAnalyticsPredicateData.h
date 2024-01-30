@class NSMutableArray;

@interface HMDAnalyticsPredicateData : HMFObject {
    BOOL _containsCalendarTime;
    BOOL _containsCharacteristicValue;
    BOOL _containsSignificantTime;
    BOOL _containsSignificantTimeOffset;
    NSMutableArray *_presenceEvents;
}

- (void).cxx_destruct;
- (id)init;

@end
