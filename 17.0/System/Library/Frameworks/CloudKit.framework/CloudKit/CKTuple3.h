@interface CKTuple3 : CKTuple

@property (retain, nonatomic) id v1;
@property (retain, nonatomic) id v2;
@property (retain, nonatomic) id v3;

- (unsigned long long)hash;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithObject1:(id)a0 object2:(id)a1 object3:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
