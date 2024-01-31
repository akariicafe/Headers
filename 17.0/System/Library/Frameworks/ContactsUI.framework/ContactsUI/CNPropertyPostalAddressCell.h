@class UIImageView;
@protocol CNCancelable;

@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell

@property (retain, nonatomic) UIImageView *mapImageView;
@property (retain, nonatomic) id<CNCancelable> tileGeneratorToken;
@property (nonatomic) BOOL shouldUseMapTiles;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)setProperty:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)generateAndSetMapTile;
- (void)setMapImage:(id)a0;
- (BOOL)supportsTintColorValue;
- (void)tapGesture:(id)a0;
- (id)variableConstraints;

@end
