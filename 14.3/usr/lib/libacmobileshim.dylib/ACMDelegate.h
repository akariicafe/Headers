@class NSString;

@interface ACMDelegate : NSObject <ACMExternalAppleConnectDelegate>

@property unsigned char finished;
@property (copy) id /* block */ copyTicketCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)appleConnect:(id)a0 authenticationDidEndWithResponse:(id)a1;
- (id)appleConnectParentViewController:(id)a0;

@end
