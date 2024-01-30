@class NSUUID;

@interface KNRecordingSyncState : NSObject <NSCopying> {
    BOOL _canClearOutOfSyncToken;
}

@property (readonly, nonatomic) NSUUID *outOfSyncToken;
@property (readonly, nonatomic, getter=isRecordingOutOfSync) BOOL recordingOutOfSync;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithOutOfSyncToken:(id)a0 canClearOutOfSyncToken:(BOOL)a1;
- (BOOL)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)a0;
- (id)recordingSyncStateByMarkingRecordingAsOutOfSync:(BOOL)a0 withLocalOutOfSyncToken:(id)a1;

@end
