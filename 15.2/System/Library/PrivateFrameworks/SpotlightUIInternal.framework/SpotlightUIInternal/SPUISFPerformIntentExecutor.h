@class NSString;

@interface SPUISFPerformIntentExecutor : SPUICommandExecutor <SearchUICommandProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userActivityFromIntent:(id)a0;
+ (id)userActivityWithIntentMessageName:(id)a0 intentMessageData:(id)a1;

- (void)getUserActivityForCommand:(id)a0 withHandler:(id /* block */)a1;

@end
