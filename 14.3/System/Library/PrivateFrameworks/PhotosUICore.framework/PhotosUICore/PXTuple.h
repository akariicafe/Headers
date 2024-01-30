@class NSArray;

@interface PXTuple : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSArray *objects;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObjects:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
