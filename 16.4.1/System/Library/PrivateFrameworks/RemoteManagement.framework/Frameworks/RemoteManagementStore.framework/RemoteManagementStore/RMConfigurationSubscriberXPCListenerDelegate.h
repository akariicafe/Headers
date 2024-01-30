@class NSArray, NSString;

@interface RMConfigurationSubscriberXPCListenerDelegate : NSObject <NSXPCListenerDelegate>

@property (readonly, copy, nonatomic) NSArray *applicatorClasses;
@property (readonly, copy, nonatomic) Class publisherClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithApplicators:(id)a0 publisherClass:(Class)a1;

@end
