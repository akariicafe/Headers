@interface AFMyriadMetrics : NSObject

+ (id)sharedInstance;

- (id)_createEndAnalyticContexFromIntermediateContext:(id)a0 forVersion:(unsigned int)a1 sessionId:(double)a2;
- (void)_decisionMadeContext:(struct MyriadMetricsDataV1 { unsigned char x0; unsigned long long x1; unsigned char x2; unsigned long long x3; unsigned char x4; double x5; double x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; double x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17[50]; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20; } *)a0 additionalContext:(id)a1 instrumentation:(id)a2 completion:(id /* block */)a3;
- (int)_getCDASchemaCDATriggerType:(unsigned long long)a0;
- (id)_getRequestType:(unsigned long long)a0;
- (void)_submitMyriadMetrics:(struct MyriadMetricsDataV1 { unsigned char x0; unsigned long long x1; unsigned char x2; unsigned long long x3; unsigned char x4; double x5; double x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; double x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17[50]; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20; } *)a0 additionalContext:(id)a1 toStream:(id)a2 instrumentation:(id)a3 completion:(id /* block */)a4;
- (id)getCDASessionId:(struct MyriadMetricsDataV1 { unsigned char x0; unsigned long long x1; unsigned char x2; unsigned long long x3; unsigned char x4; double x5; double x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; double x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17[50]; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20; } *)a0;
- (double)getSessionId:(struct MyriadMetricsDataV1 { unsigned char x0; unsigned long long x1; unsigned char x2; unsigned long long x3; unsigned char x4; double x5; double x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; double x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17[50]; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20; } *)a0;
- (unsigned int)getVersion:(struct MyriadMetricsDataV1 { unsigned char x0; unsigned long long x1; unsigned char x2; unsigned long long x3; unsigned char x4; double x5; double x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; double x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17[50]; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20; } *)a0;
- (BOOL)isMyriadMetricsMessage:(id)a0;
- (void)submitAccessoryMyriadMetricsToAnalyticsStream:(id)a0 payload:(id)a1 additionalContext:(id)a2 instrumentation:(id)a3 completion:(id /* block */)a4;
- (void)submitAccessoryMyriadMetricsToAnalyticsStream:(id)a0 payload:(id)a1 instrumentation:(id)a2 completion:(id /* block */)a3;
- (void)submitMyriadMetricsToAnalyticsStream:(id)a0 context:(id)a1 forEvent:(long long)a2 contextNoCopy:(BOOL)a3;

@end
