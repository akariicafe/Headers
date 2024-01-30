@class NSString;

@interface TVRXDeviceAuthenticationChallenge : NSObject {
    id /* block */ _continuation;
    id /* block */ _cancellationHandler;
}

@property (readonly, nonatomic) long long challengeType;
@property (nonatomic) long long challengeAttributes;
@property (nonatomic) long long throttleSeconds;
@property (readonly, copy, nonatomic) NSString *codeToEnterOnDevice;

+ (id)_challengeWithCodeToEnterLocally:(id /* block */)a0;
+ (id)_challengeWithCodeToEnterOnDevice:(id)a0 cancellationHandler:(id /* block */)a1;

- (id)_init;
- (void)cancel;
- (void).cxx_destruct;
- (void)userEnteredCodeLocally:(id)a0;

@end
