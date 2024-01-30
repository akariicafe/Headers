@class _DBIconListLayoutProvider;

@interface DBIconManager : SBHIconManager

@property (retain, nonatomic) _DBIconListLayoutProvider *layoutProvider;

- (id)initWithEnvironment:(id)a0;
- (id)iconPageIndicatorImageSetCache;
- (id)listLayoutProvider;
- (void).cxx_destruct;

@end
