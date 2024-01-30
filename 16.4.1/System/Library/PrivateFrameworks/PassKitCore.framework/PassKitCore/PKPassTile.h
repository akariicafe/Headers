@class PKPassTileMetadata, NSString, PKPassTileState;

@interface PKPassTile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassTileMetadata *metadata;
@property (readonly, nonatomic) NSString *stateIdentifier;
@property (readonly, nonatomic) PKPassTileState *state;
@property (readonly, nonatomic, getter=isInProgress) BOOL inProgress;

+ (id)createTileRowsForTiles:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithMetadata:(id)a0 stateIdentifier:(id)a1 state:(id)a2 inProgress:(BOOL)a3;
- (BOOL)supportsPaymentPassAction:(id)a0;

@end
