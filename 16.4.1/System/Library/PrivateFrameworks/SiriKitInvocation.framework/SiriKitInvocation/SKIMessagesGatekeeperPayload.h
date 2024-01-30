@class NSString, SKIDirectInvocationPayload;

@interface SKIMessagesGatekeeperPayload : NSObject

@property (copy) NSString *appBundleId;
@property (readonly, retain) SKIDirectInvocationPayload *invocationPayload;

+ (BOOL)supports:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppBundleId:(id)a0;

@end
