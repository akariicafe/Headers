@class NSString;

@interface ICSystemPaperDismissAction : BSAction

@property (readonly, copy, nonatomic) NSString *dismissalReason;

- (id)initWithReason:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)_expectsResponse;

@end
