@class NSData, NSString;

@interface PKSetupAssistantUtilityContext : NSObject <PKPaymentSetupAssistantContextProtocol>

@property (readonly, nonatomic) unsigned long long setupAssistant;
@property (retain, nonatomic) NSData *externalizedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSetupAssistant:(unsigned long long)a0;

@end
