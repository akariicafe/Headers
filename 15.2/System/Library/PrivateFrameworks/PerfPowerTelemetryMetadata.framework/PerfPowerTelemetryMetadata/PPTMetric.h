@class PPTUnit, NSString, PPTRounding, PPTDeviceType, PPTObfuscation, PPTSource, PPTCadence;

@interface PPTMetric : NSObject

@property (readonly) NSString *name;
@property (readonly) NSString *subsystem;
@property (readonly) NSString *category;
@property (readonly) double version;
@property (readonly) int datatype;
@property (readonly) PPTUnit *unit;
@property (readonly) PPTCadence *cadence;
@property (readonly) int directionality;
@property (readonly) int storage;
@property (readonly) unsigned int timeToLive;
@property (readonly) int mode;
@property (readonly) PPTSource *source;
@property (readonly) PPTDeviceType *deviceType;
@property (readonly) int enabledPopulation;
@property (readonly) PPTRounding *rounding;
@property (readonly) PPTObfuscation *obfuscation;

+ (id)metricWithJSONObject:(id)a0;
+ (BOOL)isValidTTL:(unsigned int)a0;
+ (BOOL)isValidDatatype:(int)a0;
+ (BOOL)isValidDirectionality:(int)a0;
+ (BOOL)isValidMode:(int)a0;
+ (BOOL)isValidStorage:(int)a0;
+ (id)metricWithProto:(id)a0;
+ (BOOL)isValidVersion:(double)a0;
+ (id)metricsWithJSONData:(id)a0;
+ (BOOL)isValidName:(id)a0;
+ (BOOL)isValidPopulation:(int)a0;
+ (BOOL)isValidSubsystem:(id)a0;
+ (BOOL)isValidCategory:(id)a0;
+ (BOOL)isValidMetricJSON:(id)a0;
+ (id)metricsWithPlist:(id)a0;
+ (id)jsonDataWithMetrics:(id)a0;

- (id)initWithName:(id)a0 version:(double)a1 datatype:(int)a2 unit:(id)a3 baseMetric:(id)a4;
- (id)initWithName:(id)a0 version:(double)a1 datatype:(int)a2 unit:(id)a3 rounding:(id)a4 obfuscation:(id)a5 baseMetric:(id)a6;
- (void).cxx_destruct;
- (id)init;
- (id)proto;
- (id)initWithName:(id)a0 subsystem:(id)a1 category:(id)a2 version:(double)a3 datatype:(int)a4 unit:(id)a5 cadence:(id)a6 directionality:(int)a7 storage:(int)a8 timeToLive:(unsigned int)a9 mode:(int)a10 source:(id)a11 deviceType:(id)a12 population:(int)a13 rounding:(id)a14 obfuscation:(id)a15;
- (id)json;

@end
