@class MPUDataSource, MPUNotificationObserver;
@protocol MPUDataSourceControllerDelegate;

@interface MPUDataSourceController : NSObject

@property (retain, nonatomic) MPUNotificationObserver *willInvalidateObserver;
@property (retain, nonatomic) MPUNotificationObserver *didInvalidateObserver;
@property (nonatomic) BOOL viewControllerIsVisible;
@property (nonatomic) BOOL shouldReloadWhenViewControllerIsVisible;
@property (readonly, nonatomic) MPUDataSource *dataSource;
@property (weak, nonatomic) id<MPUDataSourceControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewControllerDidDisappear;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;
- (void)_didInvalidate;
- (void)_willInvalidate;
- (void)viewControllerDidAppear;

@end
