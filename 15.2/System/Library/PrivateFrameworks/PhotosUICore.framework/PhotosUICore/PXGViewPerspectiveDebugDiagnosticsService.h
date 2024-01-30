@class PXGView;

@interface PXGViewPerspectiveDebugDiagnosticsService : PXDiagnosticsService

@property (readonly, nonatomic) PXGView *gridView;

- (BOOL)canPerformAction;
- (id)title;
- (void).cxx_destruct;
- (id)initWithItemProviders:(id)a0;
- (void)performAction;

@end
