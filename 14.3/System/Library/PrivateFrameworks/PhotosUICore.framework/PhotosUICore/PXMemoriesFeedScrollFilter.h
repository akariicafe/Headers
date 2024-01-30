@class PXMemoriesSpec, NSString, NSDate, PXScrollViewController;
@protocol PXMemoriesFeedScrollFilterDelegate;

@interface PXMemoriesFeedScrollFilter : NSObject <PXScrollViewControllerObserver> {
    double _additionalContentThreshold;
    struct { BOOL respondsToShouldRequestAdditionalContent; } _delegateFlags;
}

@property (retain, nonatomic, setter=_setLastAdditionalContentRequestDate:) NSDate *_lastAdditionalContentRequestDate;
@property (readonly, nonatomic) PXScrollViewController *scrollViewController;
@property (retain, nonatomic) PXMemoriesSpec *spec;
@property (weak, nonatomic) id<PXMemoriesFeedScrollFilterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewControllerDidScroll:(id)a0;
- (void).cxx_destruct;
- (id)initWithScrollViewController:(id)a0;

@end
