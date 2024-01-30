@class NSString, NSURL, UIView;
@protocol WebAllowDenyPolicyListener;

@interface _UIWebGeolocationChallengeData : NSObject

@property (retain, nonatomic) NSString *userVisibleDomain;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSURL *requestingURL;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) id<WebAllowDenyPolicyListener> listener;

- (void)dealloc;

@end
