@interface TPSSavedTipsManager : NSObject {
    void /* unknown type, empty encoding */ savedTipsMap;
    void /* unknown type, empty encoding */ queue;
}

@property (class, nonatomic, readonly) TPSSavedTipsManager *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeInvalidEntries;
- (id)savedDateWithCorrelationId:(id)a0;
- (void)updateSavedTipsWithCorrelationId:(id)a0 savedDate:(id)a1 lastUsedVersion:(id)a2;

@end
