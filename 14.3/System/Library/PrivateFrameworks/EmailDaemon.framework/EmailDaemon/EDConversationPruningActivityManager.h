@class NSString, NSObject;
@protocol OS_os_log;

@interface EDConversationPruningActivityManager : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)scheduleWithConversationManager:(id)a0;


@end
