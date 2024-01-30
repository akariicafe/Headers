@class NSString, NSMutableArray, NSMutableDictionary;

@interface SXHorizontalStackLayoutCalculator : NSObject <SXHorizontalStackLayoutCalculator>

@property (readonly, nonatomic) NSMutableArray *items;
@property (readonly, nonatomic) NSMutableArray *flexibleItems;
@property (readonly, nonatomic) NSMutableArray *sortedItems;
@property (readonly, nonatomic) NSMutableDictionary *componentsGroupedByMaximumWidth;
@property (readonly, nonatomic) NSMutableDictionary *componentsGroupedByMinimumWidth;
@property (readonly, nonatomic) NSMutableDictionary *minimumWidths;
@property (readonly, nonatomic) NSMutableDictionary *maximumWidths;
@property (nonatomic) double combinedMaximumWidth;
@property (nonatomic) double combinedMinimumWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addFlexibleItemWithIdentifier:(id)a0;
- (void)addItemWithMinimumWidth:(double)a0 maximumWidth:(double)a1 identifier:(id)a2;
- (id)layoutForComponentWidth:(double)a0;

@end
