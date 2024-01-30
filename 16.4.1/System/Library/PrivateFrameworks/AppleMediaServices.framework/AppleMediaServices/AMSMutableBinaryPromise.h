@interface AMSMutableBinaryPromise : AMSBinaryPromise

+ (BOOL)finishPromise:(id)a0 withPromise:(id)a1;
+ (BOOL)finishPromise:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
+ (BOOL)finishPromise:(id)a0 withError:(id)a1;
+ (BOOL)finishPromise:(id)a0 withSuccess:(BOOL)a1;
+ (BOOL)cancelPromise:(id)a0;

- (BOOL)finishWithError:(id)a0;
- (BOOL)finishWithSuccess;
- (BOOL)cancel;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)finishWithPromise:(id)a0;

@end
