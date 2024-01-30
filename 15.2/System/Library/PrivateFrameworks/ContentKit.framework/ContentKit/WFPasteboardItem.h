@class NSDictionary, NSArray;

@interface WFPasteboardItem : NSObject

@property (readonly, nonatomic) NSDictionary *itemsByType;
@property (readonly, nonatomic) NSArray *fileURLs;
@property (readonly, nonatomic) NSArray *fileURLItems;

- (void).cxx_destruct;
- (id)initWithItemsByType:(id)a0 fileURLs:(id)a1;

@end
