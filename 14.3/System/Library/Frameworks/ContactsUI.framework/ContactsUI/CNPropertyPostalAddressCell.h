@class UIImageView;
@protocol CNCancelable;

@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell

@property (retain, nonatomic) UIImageView *mapImageView;
@property (retain, nonatomic) id<CNCancelable> tileGeneratorToken;
@property (nonatomic) BOOL shouldUseMapTiles;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setProperty:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setMapImage:(id)a0;
- (void)generateAndSetMapTile;
- (BOOL)supportsTintColorValue;
- (id)variableConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)tapGesture:(id)a0;

@end
