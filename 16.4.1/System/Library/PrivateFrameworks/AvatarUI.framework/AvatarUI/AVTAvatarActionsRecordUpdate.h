@protocol AVTAvatarRecord;

@interface AVTAvatarActionsRecordUpdate : NSObject

@property (readonly, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (readonly, nonatomic) BOOL fromLeft;

+ (id)recordUpdateForDeletingRecord:(id)a0 withDataSource:(id)a1;

- (void).cxx_destruct;
- (id)initWithAvatarRecord:(id)a0 fromLeft:(BOOL)a1;

@end
