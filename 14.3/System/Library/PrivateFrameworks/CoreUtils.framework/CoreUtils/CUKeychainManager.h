@interface CUKeychainManager : NSObject

- (id)_copyItemsMatchingItemSeparate:(id)a0 flags:(unsigned int)a1 error:(id *)a2;
- (id)_copyItemsMatchingItem:(id)a0 flags:(unsigned int)a1 error:(id *)a2;
- (id)copyItemMatchingItem:(id)a0 flags:(unsigned int)a1 error:(id *)a2;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (BOOL)removeItemMatchingItem:(id)a0 error:(id *)a1;
- (BOOL)updateItem:(id)a0 matchingItem:(id)a1 error:(id *)a2;
- (BOOL)addOrUpdateOrReAddItem:(id)a0 logCategory:(struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *)a1 logLabel:(id)a2 error:(id *)a3;
- (id)copyItemsMatchingItem:(id)a0 flags:(unsigned int)a1 error:(id *)a2;
- (id)addItem:(id)a0 returnFlags:(unsigned int)a1 error:(id *)a2;

@end
