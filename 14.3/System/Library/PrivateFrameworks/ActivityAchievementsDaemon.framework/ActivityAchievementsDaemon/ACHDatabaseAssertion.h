@class HDAssertion;

@interface ACHDatabaseAssertion : NSObject

@property (retain, nonatomic) HDAssertion *assertion;

+ (id)assertionWithDatabase:(id)a0 identifier:(id)a1 timeout:(double)a2 error:(id *)a3;
+ (id)assertionWithDatabase:(id)a0 identifier:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithHDAssertion:(id)a0;

@end
