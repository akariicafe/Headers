@class NSString, ICSDuration;

@interface ICSTravelDuration : ICSProperty

@property (retain, nonatomic) NSString *transparency;
@property (retain, nonatomic) ICSDuration *duration;

- (BOOL)alwaysHasParametersToSerialize;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1 additionalParameters:(id)a2;

@end
