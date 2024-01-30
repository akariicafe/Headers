@class NSMutableDictionary, NSDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface _CDComplications : NSObject {
    NSObject<OS_dispatch_queue> *complicationQueue;
    int deviceChangeToken;
    NSUserDefaults *pushLimits;
    NSMutableDictionary *meterTokens;
}

@property (copy) NSDictionary *activeComplications;

+ (id)initializeForAdmissionChecking:(BOOL)a0;
+ (id)sharedComplication;

- (void)meteringStoppedOnComplication:(id)a0 costDictionary:(id)a1 onDate:(id)a2;
- (void).cxx_destruct;
- (int)remainingPushesOnComplication:(id)a0 andReduceBy:(id)a1;
- (BOOL)admissionCheckOnComplication:(id)a0 forRemote:(BOOL)a1 error:(id *)a2;
- (BOOL)watchIsCharging;
- (void)meteringStartedOnComplication:(id)a0 costDictionary:(id)a1 onDate:(id)a2;
- (BOOL)isBundleActiveComplication:(id)a0;
- (id)CDAttributeForComplication:(id)a0 error:(id *)a1;
- (void)meteringUpdateOnComplication:(id)a0 costDictionary:(id)a1 onDate:(id)a2;
- (id)initForComplications;
- (int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)a0;
- (void)readOutActiveComplications;

@end
