@class NSMutableArray;
@protocol SGListDelegate;

@interface SGList : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (weak, nonatomic) id<SGListDelegate> delegate;
@property (copy, nonatomic) id /* block */ comparator;

- (BOOL)removeItem:(id)a0;
- (BOOL)addItem:(id)a0;
- (void)removeAllItems;
- (id)itemAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)items;
- (unsigned long long)indexOfItem:(id)a0;

@end
