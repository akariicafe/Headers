@interface TRCompletionOperation : TROperation

@property (nonatomic) BOOL success;
@property (nonatomic) long long errorCode;

- (void)execute;

@end
