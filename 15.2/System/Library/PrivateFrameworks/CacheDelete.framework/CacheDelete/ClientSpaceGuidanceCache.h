@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ClientSpaceGuidanceCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *thresholds;
@property (retain, nonatomic) NSMutableDictionary *purgeable;
@property (retain, nonatomic) NSMutableDictionary *lastUpdateTimestamps;
@property (nonatomic) double validity_interval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)valueForVolume:(id)a0 urgency:(int)a1 serviceName:(id)a2 desiredSpace:(id)a3;
- (void)updateThresholdsForVolume:(id)a0 thresholdDictionary:(id)a1;
- (void)updatePurgeableForService:(id)a0 volume:(id)a1 urgency:(int)a2 newPurgeable:(id)a3;
- (BOOL)unserializedIsValidForVolume:(id)a0 urgency:(int)a1 desiredSpace:(id)a2;
- (id)unserializedThresholdForVolume:(id)a0 urgency:(int)a1;
- (double)unserializedGetValidityInterval;
- (void)unserializedSetValidityInterval:(double)a0;
- (BOOL)isValidForVolume:(id)a0 urgency:(int)a1 desiredSpace:(id)a2;

@end
