@class NSObject, NSMutableArray, NSMutableDictionary;
@protocol OS_nw_path_evaluator;

@interface PSGAutomaticContentDownloadController : PSListController {
    id _settingsChangedObserver;
}

@property (retain, nonatomic) NSMutableArray *applications;
@property (retain, nonatomic) NSMutableDictionary *applicationStates;
@property (retain, nonatomic) NSObject<OS_nw_path_evaluator> *defaultPathEvaluator;
@property (nonatomic) BOOL inLowDataMode;

- (id)whitelist;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)applicationEnabled:(id)a0;
- (id)backgroundRefreshState:(id)a0;
- (void)setApplicationEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setBackgroundRefreshState:(id)a0 withSpecifier:(id)a1;

@end
