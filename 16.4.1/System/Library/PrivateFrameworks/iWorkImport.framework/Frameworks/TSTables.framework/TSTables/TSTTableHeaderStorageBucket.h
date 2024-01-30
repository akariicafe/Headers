@class TSUSparseArray;

@interface TSTTableHeaderStorageBucket : TSPObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _bounds;
}

@property (retain, nonatomic) TSUSparseArray *data;
@property (nonatomic) unsigned long long styleCount;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)packageLocator;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
