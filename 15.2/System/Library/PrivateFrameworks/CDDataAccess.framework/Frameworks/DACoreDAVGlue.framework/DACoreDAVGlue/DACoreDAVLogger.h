@class NSString;

@interface DACoreDAVLogger : DATrafficLogger <CoreDAVLogDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registerDefaultLoggerWithCoreDAV;

- (BOOL)shouldLogTransmittedData;
- (void)coreDAVLogTransmittedDataPartial:(id)a0;
- (void)coreDAVTransmittedDataFinished;
- (long long)coreDAVLogLevel;
- (long long)coreDAVOutputLevel;
- (void)coreDAVLogDiagnosticMessage:(id)a0 atLevel:(long long)a1;

@end
