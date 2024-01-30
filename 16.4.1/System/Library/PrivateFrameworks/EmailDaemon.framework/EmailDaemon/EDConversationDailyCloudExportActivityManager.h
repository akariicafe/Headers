@class NSString, NSObject;
@protocol OS_os_log;

@interface EDConversationDailyCloudExportActivityManager : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)scheduleWithConversationExportDelegate:(id)a0 conversationManager:(id)a1;


@end
