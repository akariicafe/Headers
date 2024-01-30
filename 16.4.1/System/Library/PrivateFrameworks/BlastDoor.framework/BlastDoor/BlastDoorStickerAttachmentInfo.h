@class NSString;

@interface BlastDoorStickerAttachmentInfo : NSObject {
    void /* unknown type, empty encoding */ stickerAttachmentInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *stickerIdentifier;
@property (nonatomic, readonly) NSString *stickerPackIdentifier;
@property (nonatomic, readonly) NSString *stickerHash;
@property (nonatomic, readonly) NSString *balloonBundleID;
@property (nonatomic, readonly) BOOL has_positionIntent;
@property (nonatomic, readonly) unsigned long long positionIntent;
@property (nonatomic, readonly) BOOL has_associatedPositionIntent;
@property (nonatomic, readonly) unsigned long long associatedPositionIntent;
@property (nonatomic, readonly) BOOL has_parentPreviewWidth;
@property (nonatomic, readonly) double parentPreviewWidth;
@property (nonatomic, readonly) BOOL has_stickerOffset;
@property (nonatomic, readonly) struct CGPoint { double x0; double x1; } stickerOffset;
@property (nonatomic, readonly) BOOL has_stickerScale;
@property (nonatomic, readonly) double stickerScale;
@property (nonatomic, readonly) BOOL has_stickerRotation;
@property (nonatomic, readonly) double stickerRotation;

- (id)init;
- (void).cxx_destruct;

@end
