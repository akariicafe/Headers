@interface IDSTransactionLogTaskHandler : NSObject

+ (id)handlerWithTask:(id)a0 delegate:(id)a1 queue:(id)a2;

- (id)_init;
- (void)perform;

@end
