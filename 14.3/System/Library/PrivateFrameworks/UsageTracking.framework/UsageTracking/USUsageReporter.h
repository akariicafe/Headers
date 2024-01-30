@class NSXPCConnection;

@interface USUsageReporter : NSObject

@property (readonly) NSXPCConnection *xpcConnection;

+ (id)getLocalDeviceIdentifierAndReturnError:(id *)a0;
+ (void)synchronizeUsageWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchReportsDuringInterval:(id)a0 partitionInterval:(double)a1 forceImmediateSync:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)getLocalDeviceIdentifierAndReturnError:(id *)a0;
- (void)fetchReportsDuringInterval:(id)a0 partitionInterval:(double)a1 completionHandler:(id /* block */)a2;

@end
