@class NSError;

@interface CNFutureResult : NSObject

@property (retain, nonatomic) id result;
@property (copy, nonatomic) NSError *error;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setResult:(id)a0 error:(id)a1;

@end
