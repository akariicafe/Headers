@interface JEAtomicAnyObject : NSObject

@property (retain) id value;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithValue:(id)a0;
- (unsigned long long)hash;

@end
