@class CNPhotoPickerProviderItem, NSArray, CNPhotoPickerActionButton, NSString, NSIndexPath;
@protocol CNPhotoPickerActionsDelegate;

@interface CNPhotoPickerActionsModel : NSObject

@property (retain, nonatomic) NSArray *currentInlineActionButtons;
@property (retain, nonatomic) CNPhotoPickerActionButton *deleteButton;
@property (retain, nonatomic) CNPhotoPickerProviderItem *providerItem;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL canDelete;
@property (retain, nonatomic) NSString *assignActionTitleOverride;
@property (nonatomic) BOOL buttonsDisabled;
@property (weak, nonatomic) id<CNPhotoPickerActionsDelegate> delegate;
@property (readonly, nonatomic) NSArray *inlineActionButtons;

+ (BOOL)actionIsDestructive:(long long)a0;
+ (id)buttonForActionType:(long long)a0 titleOverride:(id)a1 withActionBlock:(id /* block */)a2;
+ (id)buttonForActionType:(long long)a0 withActionBlock:(id /* block */)a1;
+ (id)localizedTitleForActionType:(long long)a0;
+ (unsigned long long)maximumNumberOfButtons;

- (void).cxx_destruct;
- (BOOL)canPerformActionType:(long long)a0;
- (void)didTapDuplicate;
- (void)didTapAssignToContact;
- (void)didTapDelete;
- (void)didTapEdit;
- (id)generateInlineActionButtons;
- (id)initWithProviderItem:(id)a0 assignActionTitleOverride:(id)a1 canDelete:(BOOL)a2 atIndexPath:(id)a3;
- (void)updateProviderItem:(id)a0;

@end
