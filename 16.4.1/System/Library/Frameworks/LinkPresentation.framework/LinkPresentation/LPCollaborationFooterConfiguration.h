@class SLCollaborationFooterViewModel;

@interface LPCollaborationFooterConfiguration : NSObject

@property (retain, nonatomic) SLCollaborationFooterViewModel *viewModel;
@property (copy, nonatomic) id /* block */ action;

+ (id)configurationWithViewModel:(id)a0 action:(id /* block */)a1;

- (void).cxx_destruct;

@end
