@class NSString, EDUbiquitousConversationManager, NSObject;
@protocol OS_os_log, EDConversationDailyCloudExporterDelegate;

@interface EDConversationDailyiCloudExporter : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EDConversationDailyCloudExporterDelegate> delegate;
@property (readonly, nonatomic) EDUbiquitousConversationManager *conversationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 conversationManager:(id)a1;

@end
