@class NSString, ATXHomeScreenSuggestionClient, NSArray, ATXSuggestionLayout, ATXHomeScreenWidgetIdentifiable;

@interface APUIWidgetViewController : UIViewController

@property (readonly, nonatomic) BOOL isCurrentlyVisible;
@property (nonatomic, getter=isViewVisible) BOOL viewVisible;
@property (nonatomic) BOOL effectiveViewVisibility;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) ATXSuggestionLayout *layout;
@property (nonatomic) BOOL stackVisible;
@property (retain, nonatomic) ATXHomeScreenSuggestionClient *suggestionClient;
@property (retain, nonatomic) NSArray *suggestionIds;
@property (retain, nonatomic) ATXHomeScreenWidgetIdentifiable *widgetIdentifiable;

+ (id)smartStackImageForIconSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (id)imageForIconSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

- (id)initWithIdentifier:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)logChangeWithNewSuggestionIds:(id)a0 previousSuggestionIds:(id)a1 suggestionClient:(id)a2;
- (BOOL)matchesWidgetUniqueID:(id)a0 stackID:(id)a1;
- (void)_topWidgetDidAppear:(id)a0;
- (void)_topWidgetDidDisappear:(id)a0;
- (void)_updateViewVisibility;

@end
