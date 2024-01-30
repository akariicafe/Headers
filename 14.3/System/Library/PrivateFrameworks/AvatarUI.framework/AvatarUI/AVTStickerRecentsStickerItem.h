@class NSString, UIImage, NSURL;

@interface AVTStickerRecentsStickerItem : NSObject <AVTStickerRecentsItem>

@property (readonly, copy, nonatomic) NSString *avatarIdentifier;
@property (readonly, copy, nonatomic) NSString *stickerName;
@property (nonatomic, getter=isPrereleaseSticker) BOOL prereleaseSticker;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) id /* block */ provider;
@property (copy, nonatomic) id /* block */ discardableContentHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
