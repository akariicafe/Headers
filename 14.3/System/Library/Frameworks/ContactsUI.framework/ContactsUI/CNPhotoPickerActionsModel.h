@class CNPhotoPickerProviderItem, NSArray, NSString, NSIndexPath;
@protocol CNPhotoPickerActionsDelegate;

@interface CNPhotoPickerActionsModel : NSObject

@property (retain, nonatomic) NSArray *currentInlineActionButtons;
@property (retain, nonatomic) CNPhotoPickerProviderItem *providerItem;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL canDelete;
@property (retain, nonatomic) NSString *assignActionTitleOverride;
@property (nonatomic) BOOL buttonsDisabled;
@property (weak, nonatomic) id<CNPhotoPickerActionsDelegate> delegate;
@property (readonly, nonatomic) NSArray *inlineActionButtons;

+ (unsigned long long)maximumNumberOfButtons;
+ (id)buttonForActionType:(long long)a0 withActionBlock:(id /* block */)a1;
+ (BOOL)actionIsDestructive:(long long)a0;
+ (id)buttonForActionType:(long long)a0 titleOverride:(id)a1 withActionBlock:(id /* block */)a2;
+ (id)localizedTitleForActionType:(long long)a0;

- (void).cxx_destruct;
- (void)didTapEdit;
- (void)didTapDelete;
- (id)initWithProviderItem:(id)a0 assignActionTitleOverride:(id)a1 canDelete:(BOOL)a2 atIndexPath:(id)a3;
- (id)generateInlineActionButtons;
- (void)updateProviderItem:(id)a0;
- (void)didTapAssignToContact;
- (void)didTapDuplicate;
- (BOOL)canPerformActionType:(long long)a0;

@end
