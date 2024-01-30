@class NSString;

@interface SBIconListLayoutBlockObserver : NSObject <BSInvalidatable, SBIconListLayoutObserver>

@property (copy, nonatomic) id /* block */ didAddIconViewBlock;
@property (copy, nonatomic) id /* block */ didRemoveIconViewBlock;
@property (copy, nonatomic) id /* block */ boundsSizeChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iconListView:(id)a0 didRemoveIconView:(id)a1;
- (void)iconListViewDidChangeBoundsSize:(id)a0;
- (void)iconListView:(id)a0 didAddIconView:(id)a1;
- (void).cxx_destruct;
- (void)invalidate;

@end
