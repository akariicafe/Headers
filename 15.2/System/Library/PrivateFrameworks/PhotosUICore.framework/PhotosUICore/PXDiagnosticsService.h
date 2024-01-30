@class NSArray, NSString, UIViewController;

@interface PXDiagnosticsService : NSObject

@property (readonly, copy, nonatomic) NSArray *itemProviders;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL canProvideConsoleDescription;
@property (readonly, nonatomic) NSString *consoleDescription;
@property (readonly, nonatomic) BOOL canProvideContextualViewController;
@property (readonly, nonatomic) UIViewController *contextualViewController;
@property (readonly, nonatomic) BOOL canProvideSettingsViewController;
@property (readonly, nonatomic) UIViewController *settingsViewController;
@property (readonly, nonatomic) BOOL canPerformAction;

- (void).cxx_destruct;
- (id)init;
- (id)initWithItemProviders:(id)a0;
- (void)performAction;

@end
