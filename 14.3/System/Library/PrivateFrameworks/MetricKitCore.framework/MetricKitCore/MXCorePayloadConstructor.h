@interface MXCorePayloadConstructor : NSObject

+ (id)buildPayloadForClient:(id)a0 fromClientMetricsDictionary:(id)a1 withDateString:(id)a2;
+ (id)buildDiagnosticPayloadForClient:(id)a0 fromClientDiagnosticsDictionary:(id)a1 withDateString:(id)a2;
+ (id)buildDummyPayloadForClient:(id)a0 withDateString:(id)a1;
+ (id)buildDummyDiagnosticPayloadForClient:(id)a0 withDateString:(id)a1;

@end
