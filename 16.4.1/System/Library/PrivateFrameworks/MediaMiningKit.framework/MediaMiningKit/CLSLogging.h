@class NSObject;
@protocol OS_os_log;

@interface CLSLogging : NSObject

@property (readonly) NSObject<OS_os_log> *loggingConnection;

+ (id)sharedLogging;

- (void).cxx_destruct;

@end
