@interface CNQuickFaceTimeAction : CNQuickPropertyAction

@property (nonatomic) BOOL audioOnly;

+ (id)defaultFaceTimeTitle;
+ (id)defaultFaceTimeAudioTitle;

- (unsigned long long)score;
- (id)category;
- (id)_coreDuetValue;
- (id)_coreDuetInteractionMechanisms;
- (id)titleForContext:(long long)a0;
- (id)subtitleForContext:(long long)a0;
- (void)performWithCompletionBlock:(id /* block */)a0;
- (id)identifier;

@end
