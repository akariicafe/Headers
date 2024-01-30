@class NSString, NSObject;
@protocol OS_os_log;

@interface MFFileCompressionQueueActivityManager : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_registerXPCActivity;
+ (void)_unregisterXPCActivity;
+ (BOOL)compressFilesInQueue:(id)a0 shouldDefer:(id /* block */)a1;
+ (void)scheduleActivityIfNeeded;
+ (void)unregisterXPCActivity;


@end
