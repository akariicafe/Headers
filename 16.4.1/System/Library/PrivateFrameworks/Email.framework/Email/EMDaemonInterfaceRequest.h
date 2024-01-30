@class NSString, NSObject;
@protocol OS_os_log;

@interface EMDaemonInterfaceRequest : NSObject <EFSignpostable>

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly) unsigned long long signpostID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)uniqueRequestID;
+ (id)systemScopeSignpostLog;


@end
