@class NSString, NSMutableArray, SXVisibilityMonitor;

@interface SXVideoPlayerVisibilityMonitor : NSObject <SXVisibilityMonitoring>

@property (readonly, nonatomic) NSMutableArray *willAppearBlocks;
@property (readonly, nonatomic) NSMutableArray *didAppearBlocks;
@property (readonly, nonatomic) NSMutableArray *visiblePercentageBlocks;
@property (readonly, nonatomic) NSMutableArray *willDisappearBlocks;
@property (readonly, nonatomic) NSMutableArray *didDisappearBlocks;
@property (retain, nonatomic) SXVisibilityMonitor *visibilityMonitor;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) BOOL appeared;
@property (readonly, nonatomic) double visiblePercentage;
@property (readonly, weak, nonatomic) id object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)onDidDisappear:(id /* block */)a0;
- (void)configureVisibilityMonitor:(id)a0;
- (id)initWithVisibilityMonitor:(id)a0;
- (void)onDidAppear:(id /* block */)a0;
- (void)onVisiblePercentageChange:(id /* block */)a0;
- (void)onWillAppear:(id /* block */)a0;
- (void)onWillDisappear:(id /* block */)a0;

@end
