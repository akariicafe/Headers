@interface CNQuickFaceTimeAction : CNQuickPropertyAction

@property (nonatomic) BOOL audioOnly;

+ (id)defaultFaceTimeTitle;
+ (id)defaultFaceTimeAudioTitle;

- (id)identifier;
- (id)category;
- (unsigned long long)score;
- (id)_coreDuetValue;
- (id)_coreDuetInteractionMechanisms;
- (id)titleForContext:(long long)a0;
- (id)subtitleForContext:(long long)a0;
- (void)performWithCompletionBlock:(id /* block */)a0;

@end
