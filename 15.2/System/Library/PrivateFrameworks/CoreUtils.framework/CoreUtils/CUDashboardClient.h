@class NSString;

@interface CUDashboardClient : NSObject

@property (copy, nonatomic) NSString *server;

- (int)logf:(const char *)a0;
- (int)logJSON:(id)a0;
- (void).cxx_destruct;
- (int)activate;
- (int)_logCStr:(const char *)a0 length:(unsigned long long)a1;
- (void)invalidate;
- (int)logv:(const char *)a0 args:(char *)a1;

@end
