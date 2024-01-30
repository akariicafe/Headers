@class NSUUID, NSArray;

@interface _HDObjectAuthorizationRequest : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSArray *samples;
@property (readonly, copy, nonatomic) NSArray *samplesRequiringAuthorization;
@property (retain, nonatomic) NSArray *authorizationRecords;

- (void).cxx_destruct;
- (id)initForSamples:(id)a0 completion:(id /* block */)a1;
- (void)invokeCompletionWithSuccess:(BOOL)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id)a3;
- (void)invokeCompletionHandlerWithAuthorizedSamples:(id)a0 error:(id)a1;

@end
