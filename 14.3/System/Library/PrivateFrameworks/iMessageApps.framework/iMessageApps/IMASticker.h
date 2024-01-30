@class NSURL, NSString;

@interface IMASticker : NSObject

@property (class, readonly, nonatomic) double screenScale;

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *stickerName;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 stickerName:(id)a1 accessibilityLabel:(id)a2;

@end
