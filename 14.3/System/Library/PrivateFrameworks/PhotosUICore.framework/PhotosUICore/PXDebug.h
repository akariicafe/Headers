@class NSString;

@interface PXDebug : UIImageView

@property (nonatomic) struct CGImage { } *previewImage;
@property (nonatomic) struct CGColor { } *backgroundColor;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)layer;
- (id)__dbg_snapshotImage;
- (id)__dbg_formattedDisplayName;
- (id)description;

@end
