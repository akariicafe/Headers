@class AVTAvatarRecordDataSource, AVTAvatarRecord, UIAction;
@protocol AVTAvatarActionsModelDelegate;

@interface AVTAvatarActionsProvider : NSObject

@property (retain, nonatomic) AVTAvatarRecord *avatarRecord;
@property (readonly, nonatomic) AVTAvatarRecordDataSource *dataSource;
@property (retain, nonatomic) UIAction *createAction;
@property (retain, nonatomic) UIAction *editAction;
@property (retain, nonatomic) UIAction *duplicateAction;
@property (retain, nonatomic) UIAction *deleteAction;
@property (weak, nonatomic) id<AVTAvatarActionsModelDelegate> delegate;
@property (readonly, nonatomic) BOOL allowCreate;

+ (id)localizedTitleForActionType:(long long)a0;
+ (unsigned long long)maximumNumberOfActions;

- (BOOL)canPerformActionType:(long long)a0;
- (void).cxx_destruct;
- (void)didTapEdit;
- (void)didTapDuplicate;
- (id)initWithAvatarRecord:(id)a0 dataSource:(id)a1 allowCreate:(BOOL)a2;
- (void)generateActions;
- (void)didTapCreateNew;
- (void)didTapDelete:(id)a0;

@end
