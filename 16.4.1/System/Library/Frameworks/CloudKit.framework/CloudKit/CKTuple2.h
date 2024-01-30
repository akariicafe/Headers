@interface CKTuple2 : CKTuple

@property (retain, nonatomic) id v1;
@property (retain, nonatomic) id v2;

- (BOOL)isEqual:(id)a0;
- (id)initWithObject1:(id)a0 object2:(id)a1;
- (unsigned long long)hash;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;

@end
