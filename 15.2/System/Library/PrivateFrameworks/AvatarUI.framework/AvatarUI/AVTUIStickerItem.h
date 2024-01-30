@class NSString, MSSticker, UIImage;

@interface AVTUIStickerItem : NSObject <AVTDiscardableContent>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (retain, nonatomic) MSSticker *cachedMSSticker;
@property (nonatomic) BOOL hasBeenRendered;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (retain, nonatomic) UIImage *cachedImage;
@property (readonly, copy, nonatomic) id /* block */ resourceProvider;
@property (copy, nonatomic) id /* block */ discardableContentHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)clearCachedItems;
- (void)discardContent;
- (id)initWithIdentifier:(id)a0 localizedName:(id)a1 resourceProvider:(id /* block */)a2;

@end
