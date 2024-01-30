@class SBAlertItem, NSString;

@interface NCUserAlertActionRunner : NSObject <NCNotificationActionRunner>

@property (readonly, weak, nonatomic) SBAlertItem *alertItem;
@property (nonatomic) BOOL shouldForwardAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeAction:(id)a0 fromOrigin:(id)a1 endpoint:(id)a2 withParameters:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithSBAlertItem:(id)a0;

@end
