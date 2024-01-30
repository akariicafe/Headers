@class NSString;

@interface DACoreDAVLogger : DATrafficLogger <CoreDAVLogDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registerDefaultLoggerWithCoreDAV;

@end
