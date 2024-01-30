@class HUNewUserEducationToolbarViewModel, HUNewUserEducationStackViewModel;

@interface HUNewUserEducationWrapperViewModel : HUNewUserEducationBaseViewModel

@property (class, readonly, nonatomic) double cornerRadius;

@property (readonly, nonatomic) BOOL masksToBounds;
@property (readonly, nonatomic) HUNewUserEducationStackViewModel *stackViewModel;
@property (readonly, nonatomic) HUNewUserEducationToolbarViewModel *toolbarModel;

- (id)init;
- (void).cxx_destruct;

@end
