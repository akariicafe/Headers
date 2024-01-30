@class NSMutableArray;
@protocol SGListDelegate;

@interface SGList : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (weak, nonatomic) id<SGListDelegate> delegate;
@property (copy, nonatomic) id /* block */ comparator;

- (id)itemAtIndex:(unsigned long long)a0;
- (BOOL)addItem:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)indexOfItem:(id)a0;
- (BOOL)removeItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (void)removeAllItems;
- (id)items;

@end
