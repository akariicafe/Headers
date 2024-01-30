@interface TRIFileBackedMutableStringArray : NSObject {
    int _fd;
}

@property (readonly, nonatomic) unsigned long long count;

- (BOOL)enumerateStringsWithBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)addString:(id)a0;
- (id)init;

@end
