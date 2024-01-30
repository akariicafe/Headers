@class UIColor, NSArray, PKLinkedApplication, NSURL, NSString, UIActivityIndicatorView;

@interface PKLinkedApplicationActionCell : PKTableViewCell <PKLinkedApplicationObserver> {
    UIActivityIndicatorView *_activityIndicator;
}

@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *disabledTextColor;
@property (readonly, nonatomic) PKLinkedApplication *linkedApplication;
@property (copy, nonatomic) NSArray *storeIDs;
@property (copy, nonatomic) NSURL *appLaunchURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)reloadApplicationStateIfNecessary;
- (void)linkedApplicationDidChangeState:(id)a0;
- (id)initWithLinkedApplication:(id)a0 reuseIdentifier:(id)a1;
- (id)initWithStoreIDs:(id)a0 appLaunchURL:(id)a1 reuseIdentifier:(id)a2;

@end
