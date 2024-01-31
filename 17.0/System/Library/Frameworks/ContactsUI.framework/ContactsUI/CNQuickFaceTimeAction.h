@interface CNQuickFaceTimeAction : CNQuickPropertyAction

@property (nonatomic) BOOL audioOnly;

+ (id)defaultFaceTimeAudioTitle;
+ (id)defaultFaceTimeTitle;

- (unsigned long long)score;
- (id)category;
- (id)identifier;
- (id)_coreDuetInteractionMechanisms;
- (id)_coreDuetValue;
- (void)performWithCompletionBlock:(id /* block */)a0;
- (id)subtitleForContext:(long long)a0;
- (id)titleForContext:(long long)a0;

@end
