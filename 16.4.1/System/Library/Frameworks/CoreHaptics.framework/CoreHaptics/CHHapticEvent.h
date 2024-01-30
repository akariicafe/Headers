@class NSString, NSArray;

@interface CHHapticEvent : NSObject <CHHapticPlayable> {
    unsigned long long _audioResID;
}

@property (readonly) unsigned long long audioResID;
@property (readonly) double fullDuration;
@property (readonly) NSString *type;
@property (readonly) NSArray *eventParameters;
@property double relativeTime;
@property double duration;
@property (readonly) NSArray *events;
@property (readonly) NSArray *parameters;
@property (readonly) NSArray *parameterCurves;
@property (readonly) NSString *patternID;
@property (readonly) NSString *locality;
@property (readonly) NSString *priority;
@property (readonly) NSString *hapticPowerUsage;
@property (readonly) NSString *audioPowerUsage;
@property (readonly) NSString *usageCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)parameterValuesFromLegacyEventType:(unsigned long long)a0 sharpness:(float *)a1 fullness:(float *)a2 error:(id *)a3;

- (id)init;
- (id)getType;
- (void).cxx_destruct;
- (id)initWithAudioResourceID:(unsigned long long)a0 parameters:(id)a1 relativeTime:(double)a2;
- (id)initWithEventType:(id)a0 parameters:(id)a1 relativeTime:(double)a2;
- (id)initWithEventType:(id)a0 parameters:(id)a1 relativeTime:(double)a2 duration:(double)a3;
- (id)initWithAudioResourceID:(unsigned long long)a0 parameters:(id)a1 relativeTime:(double)a2 duration:(double)a3;
- (id)resolveExternalResources:(id)a0 error:(id *)a1;
- (id)initWithAudioResourceIndex:(unsigned long long)a0 parameters:(id)a1 time:(double)a2 duration:(double)a3;

@end
