@class NSString, NSMutableArray, SUItem;

@interface SUItemListGroup : NSObject

@property (readonly, nonatomic) NSString *indexBarTitle;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) SUItem *separatorItem;

- (id)description;
- (void)dealloc;

@end
