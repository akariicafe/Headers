@interface ASKUnbridgedCollection : NSObject

@property (readonly, nonatomic) id collection;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCollection:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;

@end
