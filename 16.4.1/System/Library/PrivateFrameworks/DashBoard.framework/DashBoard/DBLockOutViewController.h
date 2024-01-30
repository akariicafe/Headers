@class DBLockOutView, DBEnvironmentConfiguration, NSString;
@protocol DBLockOutViewControllerDelegate;

@interface DBLockOutViewController : UIViewController <DBLockOutViewDelegate>

@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;
@property (retain, nonatomic) DBLockOutView *lockOutView;
@property (weak, nonatomic) id<DBLockOutViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long lockOutMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (void).cxx_destruct;
- (void)lockOutView:(id)a0 didTapButtonOfType:(unsigned long long)a1;
- (id)_newLockOutViewForMode:(long long)a0;
- (id)initWithEnvironmentConfiguration:(id)a0;
- (void)setLockOutMode:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
