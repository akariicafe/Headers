@class NSArray, NSMutableArray;

@interface ABPKCircularArray : NSObject {
    NSMutableArray *_array;
    long long _capacity;
}

@property (readonly) NSArray *contents;

- (void)add:(id)a0;
- (long long)count;
- (id)initWithCapacity:(long long)a0;
- (void).cxx_destruct;

@end
