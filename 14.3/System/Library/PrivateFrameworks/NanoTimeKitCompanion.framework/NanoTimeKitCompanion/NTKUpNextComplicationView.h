@class NTKUpNextComplicationConfiguration, NSString, NSDictionary, UIView, NSIndexPath;
@protocol CLKMonochromeFilterProvider, NTKUpNextComplicationViewDelegate, NTKEditOptionContainerView, NTKComplicationTemplateDataSource;

@interface NTKUpNextComplicationView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView>

@property (nonatomic) unsigned long long currentViewIndex;
@property (copy, nonatomic) NSDictionary *indexedViews;
@property (copy, nonatomic) NSDictionary *indexPathLookup;
@property (copy, nonatomic) NSDictionary *numberLookup;
@property (nonatomic) unsigned long long centeredViewIndex;
@property (retain, nonatomic) UIView<NTKEditOptionContainerView> *pickingView;
@property (nonatomic) unsigned long long numberOfViewsInCylinderView;
@property (readonly, nonatomic) NSIndexPath *visibleIndexPath;
@property (weak, nonatomic) id<NTKComplicationTemplateDataSource> dataSource;
@property (readonly, nonatomic) NTKUpNextComplicationConfiguration *configuration;
@property (weak, nonatomic) id<NTKUpNextComplicationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (void)_centerToIndex:(unsigned long long)a0;
- (void)_setView:(id)a0 forSideAtIndex:(long long)a1;
- (void)_enumerateRichViewsWithBlock:(id /* block */)a0;
- (void)showIndexPath:(id)a0;

@end
