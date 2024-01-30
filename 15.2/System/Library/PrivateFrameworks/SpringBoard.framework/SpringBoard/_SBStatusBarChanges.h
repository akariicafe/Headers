@class NSString;

@interface _SBStatusBarChanges : NSObject

@property (nonatomic) BOOL statusBarStyleChanged;
@property (nonatomic) long long statusBarStyle;
@property (nonatomic) BOOL statusBarPartStyleChanged;
@property (nonatomic) long long statusBarPartStyle;
@property (retain, nonatomic) NSString *statusBarPartIdentifier;

- (void).cxx_destruct;
- (void)invalidate;
- (void)setStatusBarPartStyle:(long long)a0 forPartWithIdentifier:(id)a1;

@end
