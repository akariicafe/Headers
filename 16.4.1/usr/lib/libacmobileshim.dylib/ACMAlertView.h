@class NSString;

@interface ACMAlertView : UIAlertView <UIAlertViewDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property id acmAlertViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAlpha:(double)a0;
- (void)dealloc;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)dismissAlert;
- (void)showWithCompletionBlock:(id /* block */)a0;

@end
