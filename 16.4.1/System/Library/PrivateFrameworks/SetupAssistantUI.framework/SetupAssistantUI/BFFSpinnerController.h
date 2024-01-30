@class NSString;
@protocol BFFFlowItemDelegate;

@interface BFFSpinnerController : OBSetupAssistantSpinnerController <BFFFlowItem>

@property (weak, nonatomic) id<BFFFlowItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cloudConfigSkipKey;

@end
