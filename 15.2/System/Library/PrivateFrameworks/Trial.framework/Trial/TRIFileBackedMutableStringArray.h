@interface TRIFileBackedMutableStringArray : NSObject {
    int _fd;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void)dealloc;
- (BOOL)enumerateStringsWithBlock:(id /* block */)a0;
- (BOOL)addString:(id)a0;

@end
