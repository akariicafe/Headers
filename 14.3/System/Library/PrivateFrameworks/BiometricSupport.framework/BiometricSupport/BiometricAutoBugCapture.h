@class NSString, SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue;

@interface BiometricAutoBugCapture : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *process;
@property (readonly, nonatomic) SDRDiagnosticReporter *reporter;
@property (readonly, nonatomic) BOOL serialLogEnabled;

- (void).cxx_destruct;
- (id)getSignatureForReason:(unsigned long long)a0;
- (id)getSubtypeForReason:(unsigned long long)a0;
- (id)getSignatureWithType:(id)a0 subtype:(id)a1;
- (id)initWithDomain:(id)a0 process:(id)a1 dispatchQueue:(id)a2;
- (id)getTypeForReason:(unsigned long long)a0;
- (BOOL)sendSignature:(id)a0 withDuration:(double)a1;
- (BOOL)sendAutoBugCaptureEvent:(unsigned long long)a0;

@end
