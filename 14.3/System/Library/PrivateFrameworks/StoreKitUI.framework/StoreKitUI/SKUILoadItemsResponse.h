@class NSDictionary, NSSet;

@interface SKUILoadItemsResponse : NSObject

@property (copy, nonatomic) NSDictionary *loadedItems;
@property (copy, nonatomic) NSSet *invalidItemIdentifiers;

- (void).cxx_destruct;

@end
