@class UIImage, NSString;

@interface AVTAvatarAttributeEditorSectionItem : NSObject <AVTAvatarAttributeEditorSectionItemInternal, AVTDiscardableContent, AVTAvatarAttributeEditorSectionItemPrefetching, AVTAvatarUpdating, AVTAvatarAttributeEditorSectionItem>

@property (retain, nonatomic) UIImage *cachedThumbnail;
@property (readonly, nonatomic) double heightRatio;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) id /* block */ avatarUpdater;
@property (copy, nonatomic) id /* block */ discardableContentHandler;
@property (readonly, copy, nonatomic) NSString *prefetchingIdentifier;
@property (readonly, copy, nonatomic) id /* block */ thumbnailProvider;
@property (readonly, copy, nonatomic) id /* block */ stickerResourceProvider;
@property (readonly, copy, nonatomic) id /* block */ presetResourcesProvider;

@end
