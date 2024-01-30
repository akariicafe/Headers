@interface UniqueAnimationKeyCounter : NSObject {
    unsigned long long _nextAnimationKey;
    unsigned long long _finishedUsingKeys;
}

@property (readonly, nonatomic, getter=isFinishedUsingAllKeys) BOOL finishedUsingAllKeys;

- (unsigned long long)nextAnimationKey;
- (void)didFinishUsingAnimationKey;

@end
