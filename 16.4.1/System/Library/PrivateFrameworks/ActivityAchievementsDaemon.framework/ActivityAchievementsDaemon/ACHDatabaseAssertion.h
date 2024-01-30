@class HDAssertion;

@interface ACHDatabaseAssertion : NSObject

@property (retain, nonatomic) HDAssertion *assertion;

+ (id)assertionWithDatabase:(id)a0 identifier:(id)a1 timeout:(double)a2 error:(id *)a3;
+ (id)assertionWithDatabase:(id)a0 identifier:(id)a1 error:(id *)a2;

- (id)initWithHDAssertion:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
