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

- (void).cxx_destruct;
- (BOOL)canPerformActionType:(long long)a0;
- (void)didTapDuplicate;
- (void)didTapEdit;
- (void)generateActions;
- (void)didTapCreateNew;
- (void)didTapDelete:(id)a0;
- (id)initWithAvatarRecord:(id)a0 dataSource:(id)a1 allowCreate:(BOOL)a2;

@end
