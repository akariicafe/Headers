@class _DPDaemonConnection;

@interface _DPXPCRecorder : _DPDataRecorder

@property (readonly, nonatomic) _DPDaemonConnection *connection;

- (void)recordFloatVectors:(id)a0 metadata:(id)a1;
- (id)initWithKey:(id)a0;
- (void)recordNumbers:(id)a0 metadata:(id)a1;
- (void)recordNumbersVectors:(id)a0;
- (void)recordWords:(id)a0;
- (void)recordNumbersVectors:(id)a0 metadata:(id)a1;
- (void)recordNumbers:(id)a0;
- (void)recordBitVectors:(id)a0;
- (void)recordBitValues:(id)a0 metadata:(id)a1;
- (void)recordBitVectors:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)recordStrings:(id)a0 metadata:(id)a1;
- (void)recordFloatVectors:(id)a0;
- (void)recordStrings:(id)a0;
- (void)recordBitValues:(id)a0;
- (void)handleReturn:(BOOL)a0 forSelector:(id)a1 key:(id)a2 values:(id)a3 error:(id)a4;

@end
