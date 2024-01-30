@class MPUDataSource, NSString, MPUQueryDataSource;
@protocol UIStateRestoring;

@interface MPUDataSourceViewController : UIViewController <UIStateRestoring, UIViewControllerRestoration> {
    BOOL _hasEverReloadedData;
}

@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) BOOL shouldReloadWhenVisible;
@property (retain, nonatomic) MPUDataSource *dataSource;
@property (readonly, nonatomic) MPUQueryDataSource *queryDataSource;
@property (readonly, nonatomic) id<UIStateRestoring> restorationParent;
@property (readonly, nonatomic) Class objectRestorationClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithRestorationIdentifierPath:(id)a0 coder:(id)a1;

- (void)encodeRestorableStateWithCoder:(id)a0;
- (void)reloadData;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setDataSource:(id)a0 shouldReloadData:(BOOL)a1;
- (void)dataSourceWillInvalidate;
- (void)dataSourceDidInvalidate;
- (void)_MPUStandardViewController_dataSourceWillInvalidateNotification:(id)a0;
- (void)_MPUStandardViewController_dataSourceDidInvalidateNotification:(id)a0;

@end
