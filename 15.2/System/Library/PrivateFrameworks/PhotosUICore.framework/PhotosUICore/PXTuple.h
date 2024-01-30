@class NSArray;

@interface PXTuple : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSArray *objects;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithObjects:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
