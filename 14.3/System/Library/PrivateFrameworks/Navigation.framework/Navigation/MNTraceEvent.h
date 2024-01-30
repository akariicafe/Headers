@class NSString, NSDictionary, MNLocation;

@interface MNTraceEvent : NSObject {
    NSString *_cachedPrimaryDescription;
    NSString *_cachedSecondaryDescription;
}

@property (readonly, nonatomic) double timeSinceStartOfRoute;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (readonly, nonatomic) unsigned long long stage;
@property (readonly, nonatomic) double distanceToStartOfManeuver;
@property (readonly, nonatomic) MNLocation *location;
@property (nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) NSString *primaryDescription;
@property (readonly, nonatomic) NSString *secondaryDescription;
@property (copy, nonatomic) NSDictionary *eventData;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTime:(double)a0 stepIndex:(unsigned long long)a1 stage:(unsigned long long)a2 distance:(double)a3 location:(id)a4 eventType:(unsigned long long)a5 eventData:(id)a6;
- (id)instructionsFromSignDescription:(id)a0;
- (id)stringByInstructions:(id)a0;
- (void)_calculateDescription;
- (id)shieldToText:(id)a0;

@end
