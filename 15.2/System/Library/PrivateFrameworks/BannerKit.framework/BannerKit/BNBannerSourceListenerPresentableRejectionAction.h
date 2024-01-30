@class NSString;

@interface BNBannerSourceListenerPresentableRejectionAction : BSAction

@property (readonly, copy, nonatomic) NSString *rejectionReason;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)_expectsResponse;
- (id)initWithReason:(id)a0;

@end
