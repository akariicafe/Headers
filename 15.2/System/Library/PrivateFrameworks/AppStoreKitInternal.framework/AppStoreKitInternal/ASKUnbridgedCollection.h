@interface ASKUnbridgedCollection : NSObject

@property (readonly, nonatomic) id collection;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCollection:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;

@end
