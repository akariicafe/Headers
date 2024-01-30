@class NSString, NSIndexPath;

@interface AVTStickerTask : NSObject

@property (readonly, nonatomic) id /* block */ task;
@property (readonly, nonatomic) NSString *avatarRecordIdentifier;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) unsigned long long stickerType;

+ (id)stickerTaskForSchedulerTask:(id /* block */)a0 avatarRecordIdentifier:(id)a1 indexPath:(id)a2 stickerType:(unsigned long long)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTask:(id /* block */)a0 avatarRecordIdentifier:(id)a1 indexPath:(id)a2 stickerType:(unsigned long long)a3;

@end
