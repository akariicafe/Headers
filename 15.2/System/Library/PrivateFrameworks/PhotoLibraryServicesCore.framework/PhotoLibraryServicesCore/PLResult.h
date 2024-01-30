@class NSError;

@interface PLResult : NSObject

@property (readonly) id result;
@property (readonly, copy) NSError *error;
@property (readonly) BOOL isSuccess;
@property (readonly) BOOL isFailure;

+ (id)failureWithError:(id)a0;
+ (id)successWithResult:(id)a0;

- (id)resultWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0 error:(id)a1;

@end
