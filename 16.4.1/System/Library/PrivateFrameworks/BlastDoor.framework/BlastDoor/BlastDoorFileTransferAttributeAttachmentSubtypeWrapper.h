@class BlastDoorAudioMessageAttachmentInfo, NSString, BlastDoorStickerAttachmentInfo, BlastDoorLivePhotoAttachmentInfo, BlastDoorGeneralAttachmentInfo;

@interface BlastDoorFileTransferAttributeAttachmentSubtypeWrapper : NSObject {
    void /* unknown type, empty encoding */ fileTransferAttribute_AttachmentSubtype;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorGeneralAttachmentInfo *unspecified;
@property (nonatomic, readonly) BlastDoorStickerAttachmentInfo *sticker;
@property (nonatomic, readonly) BlastDoorLivePhotoAttachmentInfo *livePhoto;
@property (nonatomic, readonly) BlastDoorAudioMessageAttachmentInfo *audioMessage;

- (id)init;
- (void).cxx_destruct;

@end
