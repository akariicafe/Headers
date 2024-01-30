@class NSString;

@interface IMAssistantAccountDefaultDataSource : NSObject <IMAssistantAccountDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)countryCode;
- (id)imHandleWithID:(id)a0;
- (BOOL)hasMessagingAccount;

@end
