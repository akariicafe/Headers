@class HUNewUserEducationToolbarViewModel, HUNewUserEducationStackViewModel;

@interface HUNewUserEducationWrapperViewModel : HUNewUserEducationBaseViewModel

@property (class, readonly, nonatomic) double cornerRadius;

@property (readonly, nonatomic) BOOL masksToBounds;
@property (readonly, nonatomic) HUNewUserEducationStackViewModel *stackViewModel;
@property (readonly, nonatomic) HUNewUserEducationToolbarViewModel *toolbarModel;

- (void).cxx_destruct;
- (id)init;

@end
