@class NSString;

@interface WDInteractiveChartTableViewCell : HKViewTableViewCell <WDDisplayTypeDetailViewControllerChartCellType>

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) unsigned long long marginMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTimeScope:(long long)a0;
- (void)setPrimaryValueSource:(id)a0 secondaryValueSource:(id)a1 chartSource:(id)a2;

@end
