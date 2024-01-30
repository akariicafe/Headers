@interface CNQuickFaceTimeAction : CNQuickPropertyAction

@property (nonatomic) BOOL audioOnly;

+ (id)defaultFaceTimeAudioTitle;
+ (id)defaultFaceTimeTitle;

- (unsigned long long)score;
- (id)identifier;
- (id)category;
- (id)_coreDuetInteractionMechanisms;
- (id)_coreDuetValue;
- (void)performWithCompletionBlock:(id /* block */)a0;
- (id)subtitleForContext:(long long)a0;
- (id)titleForContext:(long long)a0;

@end
