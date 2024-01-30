@class NSError;

@interface CNFutureResult : NSObject

@property (retain, nonatomic) id result;
@property (copy, nonatomic) NSError *error;

- (void)setResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
