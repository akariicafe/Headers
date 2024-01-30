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

+ (unsigned long long)maximumNumberOfActions;
+ (id)localizedTitleForActionType:(long long)a0;

- (void)generateActions;
- (void)didTapCreateNew;
- (void)didTapDelete:(id)a0;
- (void).cxx_destruct;
- (id)initWithAvatarRecord:(id)a0 dataSource:(id)a1 allowCreate:(BOOL)a2;
- (void)didTapEdit;
- (void)didTapDuplicate;
- (BOOL)canPerformActionType:(long long)a0;

@end
