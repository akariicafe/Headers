@class NSString, MSSticker;

@interface AVTUIStickerItem : NSObject <AVTDiscardableContent>

@property (readonly, copy, nonatomic) NSString *localizedName;
@property (retain, nonatomic) MSSticker *cachedMSSticker;
@property (nonatomic) BOOL hasBeenRendered;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, copy, nonatomic) id /* block */ resourceProvider;
@property (copy, nonatomic) id /* block */ discardableContentHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)discardContent;
- (id)initWithLocalizedName:(id)a0 resourceProvider:(id /* block */)a1;
- (void).cxx_destruct;
- (void)clearCachedItems;

@end
