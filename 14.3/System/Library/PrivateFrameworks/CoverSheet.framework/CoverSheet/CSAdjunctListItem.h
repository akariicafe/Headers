@class NSString, SBSLockScreenContentAction, NSMutableSet, UIView, UIViewController;
@protocol CSAdjunctItemHosting;

@interface CSAdjunctListItem : NSObject <CSAdjunctListItemProviding> {
    NSMutableSet *_actions;
}

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SBSLockScreenContentAction *action;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIViewController<CSAdjunctItemHosting> *contentHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (BOOL)isValid;
- (void)removeAction:(id)a0;
- (void)conformsToCSAdjunctListItemProviding;

@end
