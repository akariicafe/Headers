@class NSString, ICSDuration;

@interface ICSTravelDuration : ICSProperty

@property (retain, nonatomic) NSString *transparency;
@property (retain, nonatomic) ICSDuration *duration;

- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1 additionalParameters:(id)a2;
- (BOOL)alwaysHasParametersToSerialize;

@end
