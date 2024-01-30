@class NSXPCListenerEndpoint;

@interface SYBacklinkIndicatorUsage : NSObject

@property (class, retain, nonatomic) NSXPCListenerEndpoint *_listenerEndpoint;

+ (void)_assumeEndpoint:(id)a0;
+ (id)_identifierFromUserActivity:(id)a0;
+ (id)_proxyWithError:(id *)a0;
+ (void)didActivateBacklinkItemWithIdentifier:(id)a0;
+ (void)didActivateBacklinkItemWithUserActivity:(id)a0;
+ (void)didDismissBacklinkItemWithUserActivity:(id)a0;

@end
