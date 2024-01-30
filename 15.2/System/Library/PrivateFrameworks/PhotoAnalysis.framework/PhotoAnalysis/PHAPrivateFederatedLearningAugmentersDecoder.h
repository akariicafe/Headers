@class NSDictionary;

@interface PHAPrivateFederatedLearningAugmentersDecoder : NSObject

@property (readonly, nonatomic) NSDictionary *augmenterNameToClass;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_generateError:(id *)a0 errorCode:(long long)a1 errorMessage:(id)a2;
- (id)augmentersFromArray:(id)a0 error:(id *)a1;
- (id)instanceForAugmenterConfig:(id)a0 error:(id *)a1;

@end
