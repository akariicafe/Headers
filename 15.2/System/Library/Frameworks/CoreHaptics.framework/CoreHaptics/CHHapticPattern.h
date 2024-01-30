@class NSArray, NSDictionary, NSString, NSNumber, NSMutableArray;

@interface CHHapticPattern : NSObject <CHHapticPlayable> {
    NSNumber *_version;
    NSString *_patternID;
    NSMutableArray *_embeddedResourceInfo;
    NSMutableArray *_events;
    NSMutableArray *_parameters;
    NSMutableArray *_parameterCurves;
}

@property (readonly) float version;
@property (readonly, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, nonatomic) double duration;
@property (readonly) NSArray *events;
@property (readonly) NSArray *parameters;
@property (readonly) NSArray *parameterCurves;
@property (readonly) NSString *patternID;
@property (readonly) NSString *locality;
@property (readonly) NSString *priority;
@property (readonly) NSString *hapticPowerUsage;
@property (readonly) NSString *audioPowerUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventListFromEvents:(id)a0 parameters:(id)a1 parameterCurves:(id)a2 engine:(id)a3 privileged:(BOOL)a4;
+ (id)addHapticsForWheelsOfTime:(id)a0;
+ (id)patternForKey:(id)a0 error:(id *)a1;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)resolveExternalResources:(id)a0 error:(id *)a1;
- (id)init;
- (id)exportDictionaryAndReturnError:(id *)a0;
- (id)exportDictionaryWithConfigurationAndReturnError:(id *)a0;
- (id)eventListFromDictionary:(id)a0 error:(id *)a1;
- (id)initWithEvents:(id)a0 parameterCurves:(id)a1 error:(id *)a2;
- (id)initWithEvents:(id)a0 parameters:(id)a1 error:(id *)a2;

@end
