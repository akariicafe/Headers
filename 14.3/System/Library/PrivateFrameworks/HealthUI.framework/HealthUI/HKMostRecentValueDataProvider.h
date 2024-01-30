@protocol HKDataProviderValue;

@interface HKMostRecentValueDataProvider : HKValueDataProvider

@property (readonly, nonatomic) id<HKDataProviderValue> value;

- (id)currentValue;
- (id)fetchOperationWithCompletion:(id /* block */)a0;
- (id)_mostRecentValueQueryWithCompletion:(id /* block */)a0;

@end
