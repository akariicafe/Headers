@class NSString;

@interface _TVRXDeviceAuthenticationChallenge : NSObject {
    id /* block */ _continuation;
    id /* block */ _cancellationHandler;
}

@property (readonly, nonatomic) long long challengeType;
@property (nonatomic) long long challengeAttributes;
@property (nonatomic) long long throttleSeconds;
@property (readonly, copy, nonatomic) NSString *codeToEnterOnDevice;

+ (id)_challengeWithCodeToEnterOnDevice:(id)a0 cancellationHandler:(id /* block */)a1;
+ (id)_challengeWithCodeToEnterLocally:(id /* block */)a0;

- (void)cancel;
- (void).cxx_destruct;
- (id)_init;
- (void)userEnteredCodeLocally:(id)a0;

@end
