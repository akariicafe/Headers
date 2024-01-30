@interface HMDDecryptionCompletedEvent : HMDLogEvent

@property (nonatomic) BOOL didDecryptionFail;

+ (id)uuid;
+ (id)decryptionCompletedWithFailure:(BOOL)a0;

- (id)initWithFailure:(BOOL)a0;

@end
