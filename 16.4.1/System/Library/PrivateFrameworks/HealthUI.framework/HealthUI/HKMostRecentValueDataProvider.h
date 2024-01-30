@protocol HKDataProviderValue;

@interface HKMostRecentValueDataProvider : HKValueDataProvider

@property (readonly, nonatomic) id<HKDataProviderValue> value;

- (id)currentValue;
- (id)_mostRecentValueQueryWithCompletion:(id /* block */)a0;
- (id)fetchOperationWithCompletion:(id /* block */)a0;

@end
