@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNTimeProfilingTaskOSLogger : NSObject <CNTaskTimeProfileLogging>

@property (readonly) NSObject<OS_os_log> *os_log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOSLog:(id)a0;
- (void)task:(id)a0 didCompleteAfter:(double)a1;
- (void)task:(id)a0 didFailWithError:(id)a1 after:(double)a2;
- (void)taskWillBegin:(id)a0;

@end
