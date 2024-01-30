@class PKPassTileAccessory, UIImage, PKPassTile, PKPassTileImage, NSAttributedString;

@interface PKPassTileView_State : NSObject {
    PKPassTile *_source;
    BOOL _iconVisible;
    BOOL _titleVisible;
    BOOL _bodyVisible;
    BOOL _spinnerVisible;
    BOOL _buttonVisible;
    PKPassTileImage *_icon;
    UIImage *_iconImage;
    PKPassTileAccessory *_accessory;
    NSAttributedString *_title;
    NSAttributedString *_body;
    double _validUntil;
}

- (id)init;
- (void).cxx_destruct;

@end
