@class NSArray, NSString;

@interface CNUICoreContactAggregateValueFilter : NSObject <CNUICoreContactPropertyValueFilter>

@property (readonly, nonatomic) NSArray *valueFilters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithValueFilters:(id)a0;
- (void)filterPropertyValuesFromContact:(id)a0;
- (id)contactByFilteringOutPropertyValueOfContact:(id)a0;

@end
