@class NSMutableArray;

@interface SKUIProductPageProductInfo : NSObject {
    NSMutableArray *_labels;
    NSMutableArray *_values;
}

@property (readonly, nonatomic) long long numberOfEntries;

- (void).cxx_destruct;
- (void)enumerateEntriesWithBlock:(id /* block */)a0;
- (id)initWithInfoSectionDictionaries:(id)a0;

@end
