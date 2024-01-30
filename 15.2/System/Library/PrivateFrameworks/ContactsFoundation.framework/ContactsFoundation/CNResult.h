@class NSError, CNEither;

@interface CNResult : NSObject

@property (class, readonly) id /* block */ isSuccess;
@property (class, readonly) id /* block */ isFailure;

@property (readonly) CNEither *either;
@property (readonly) id value;
@property (readonly, copy) NSError *error;
@property (readonly) BOOL isSuccess;
@property (readonly) BOOL isFailure;

+ (id)resultWithValue:(id)a0 orError:(id)a1;
+ (id)failureWithError:(id)a0;
+ (id)resultWithFuture:(id)a0;
+ (id)successWithValue:(id)a0;
+ (id)resultWithBlock:(id /* block */)a0;

- (id)flatMap:(id /* block */)a0;
- (id)valueWithError:(id *)a0;
- (id)recover:(id /* block */)a0;
- (id)initWithError:(id)a0;
- (id)initWithValue:(id)a0 error:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0;
- (unsigned long long)hash;

@end
