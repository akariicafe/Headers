@class NSArray, CPLDiffTracker;

@interface CPLRecordChangeDiffTracker : NSObject {
    CPLDiffTracker *_diffTracker;
    unsigned long long _trackingChangeType;
}

@property (readonly, nonatomic) NSArray *updatedProperties;

- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)description;
- (void)withTrackerForChangeType:(unsigned long long)a0 block:(id /* block */)a1;
- (id)initWithTrackingChangeTypeMask:(unsigned long long)a0;
- (BOOL)areObjectsDifferentOnProperty:(id)a0 changeType:(unsigned long long)a1;

@end
