@class NSString;

@interface TSKUIAlertViewCompletionHandlerDelegate : NSObject <UIAlertViewDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;

@end
