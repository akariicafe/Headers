@class NSArray, NSString;
@protocol BFFFlowItemDelegate;

@interface BuddyChoiceController : OBSplashController <BFFFlowItem>

@property (weak, nonatomic) id<BFFFlowItemDelegate> delegate;
@property (copy, nonatomic) NSArray *choices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cloudConfigSkipKey;

- (void).cxx_destruct;
- (void)_tappedChoice:(id)a0;
- (void)didSelectChoice:(id)a0;

@end
