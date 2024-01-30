@class NSError, CNEither;

@interface CNResult : NSObject

@property (class, readonly) id /* block */ isSuccess;
@property (class, readonly) id /* block */ isFailure;

@property (readonly) CNEither *either;
@property (readonly) id value;
@property (readonly, copy) NSError *error;
@property (readonly) BOOL isSuccess;
@property (readonly) BOOL isFailure;

+ (id)failureWithError:(id)a0;
+ (id)resultWithFuture:(id)a0;
+ (id)resultWithBlock:(id /* block */)a0;
+ (id)resultWithFuture:(id)a0 timeout:(double)a1;
+ (id)successWithValue:(id)a0;
+ (id)resultWithValue:(id)a0 orError:(id)a1;

- (id)recover:(id /* block */)a0;
- (id)flatMap:(id /* block */)a0;
- (id)valueWithError:(id *)a0;
- (id)initWithValue:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithError:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 error:(id)a1;

@end
