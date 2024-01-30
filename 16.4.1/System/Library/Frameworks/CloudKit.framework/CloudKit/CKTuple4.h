@interface CKTuple4 : CKTuple

@property (retain, nonatomic) id v1;
@property (retain, nonatomic) id v2;
@property (retain, nonatomic) id v3;
@property (retain, nonatomic) id v4;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithObject1:(id)a0 object2:(id)a1 object3:(id)a2 object4:(id)a3;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;

@end
