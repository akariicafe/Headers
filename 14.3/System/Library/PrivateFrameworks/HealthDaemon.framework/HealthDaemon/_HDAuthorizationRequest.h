@class NSUUID, NSSet;

@interface _HDAuthorizationRequest : NSObject {
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSSet *typesToWrite;
@property (readonly, copy, nonatomic) NSSet *typesToRead;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 typesToWrite:(id)a1 typesToRead:(id)a2 completionHandler:(id /* block */)a3;
- (void)invokeCompletionHandlerWithSuccess:(BOOL)a0 error:(id)a1;

@end
