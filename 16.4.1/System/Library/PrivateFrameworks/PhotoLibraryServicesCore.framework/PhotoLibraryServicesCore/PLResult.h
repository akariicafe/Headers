@class NSError;

@interface PLResult : NSObject

@property (readonly) id result;
@property (readonly, copy) NSError *error;
@property (readonly) BOOL isSuccess;
@property (readonly) BOOL isFailure;

+ (id)failureWithError:(id)a0;
+ (id)successWithResult:(id)a0;

- (id)initForSubclasses;
- (id)resultWithError:(id *)a0;
- (id)description;

@end
