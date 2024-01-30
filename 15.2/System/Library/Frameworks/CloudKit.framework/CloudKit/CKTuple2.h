@interface CKTuple2 : NSObject

@property (retain, nonatomic) id v1;
@property (retain, nonatomic) id v2;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithObject1:(id)a0 object2:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
