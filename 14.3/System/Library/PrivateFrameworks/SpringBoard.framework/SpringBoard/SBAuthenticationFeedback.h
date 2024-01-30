@interface SBAuthenticationFeedback : NSObject {
    unsigned long long result;
}

@property (readonly, nonatomic) unsigned long long result;
@property (readonly, nonatomic) BOOL showPasscode;
@property (readonly, nonatomic) BOOL hintFailureText;
@property (readonly, nonatomic) BOOL vibrate;
@property (readonly, nonatomic) BOOL jiggleLock;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initForFailureWithFailureSettings:(id)a0;
- (id)initForSuccess;
- (id)initForFailureShowingPasscode:(BOOL)a0;

@end
