@class AXUIClient, NSString;

@interface AXLocalizationCaptionService : NSObject <AXUIClientDelegate>

@property (retain, nonatomic) AXUIClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)stopService;
+ (id)service;
+ (void)_sendMessage:(id)a0 withIdentifier:(unsigned long long)a1 errorHandler:(id /* block */)a2;
+ (void)startService;

- (id)_clientIdentifier;
- (void).cxx_destruct;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;

@end
