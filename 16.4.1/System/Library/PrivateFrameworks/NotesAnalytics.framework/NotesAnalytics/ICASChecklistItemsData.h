@class NSString, NSNumber;

@interface ICASChecklistItemsData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *countOfCheckedItems;
@property (readonly, nonatomic) NSNumber *countOfTotalItems;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCountOfCheckedItems:(id)a0 countOfTotalItems:(id)a1;

@end
