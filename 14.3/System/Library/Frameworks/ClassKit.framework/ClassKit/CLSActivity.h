@class NSString, NSArray, NSDate, CLSActivityItem;

@interface CLSActivity : CLSObject <CLSRelationable> {
    BOOL _paused;
    NSDate *_activityStartDate;
    NSString *_primaryActivityItemIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isBackgroudTimeTrackingEnabled) BOOL backgroundTimeTrackingEnabled;
@property (copy, nonatomic) NSString *primaryActivityItemIdentifier;
@property (nonatomic) double progress;
@property (readonly, nonatomic) double duration;
@property (retain, nonatomic) CLSActivityItem *primaryActivityItem;
@property (readonly, nonatomic) NSArray *additionalActivityItems;

+ (id)relations;
+ (BOOL)supportsSecureCoding;

- (BOOL)isStarted;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)pause;
- (id)dictionaryRepresentation;
- (void)start;
- (void)resume;
- (void)encodeWithCoder:(id)a0;
- (long long)effectiveAuthorizationStatus;
- (void)addProgressRangeFromStart:(double)a0 toEnd:(double)a1;
- (double)runningDelta;
- (void)_generateTimeInterval;
- (id)activityItemWithIdentifier:(id)a0;
- (BOOL)validatePrimaryActivityItemType:(id)a0;
- (BOOL)_isObjectActivityItem:(id)a0 withIdentifier:(id)a1;
- (BOOL)_isObjectPrimaryItem:(id)a0;
- (void)addAdditionalActivityItem:(id)a0;

@end
