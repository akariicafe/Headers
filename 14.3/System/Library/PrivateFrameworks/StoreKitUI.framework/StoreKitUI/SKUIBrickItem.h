@class SKUICountdown, NSString, SKUIEditorialComponent, SKUIArtwork, SKUILink;

@interface SKUIBrickItem : NSObject

@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) SKUIArtwork *artwork;
@property (readonly, nonatomic) long long brickIdentifier;
@property (readonly, nonatomic) SKUICountdown *countdown;
@property (readonly, nonatomic) SKUIEditorialComponent *editorial;
@property (readonly, nonatomic) SKUILink *link;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithBannerRoomContext:(id)a0;
- (void)_setLinkItem:(id)a0;
- (id)initWithComponentContext:(id)a0;
- (void)_setLinkInfoWithLinkDictionary:(id)a0 context:(id)a1;

@end
