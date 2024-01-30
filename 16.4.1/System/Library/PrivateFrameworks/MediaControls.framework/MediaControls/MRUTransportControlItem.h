@class NSString, MRUAsset;

@interface MRUTransportControlItem : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MRUAsset *asset;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL supportsHolding;
@property (readonly, nonatomic) id /* block */ mainAction;
@property (readonly, nonatomic) id /* block */ holdBeganAction;
@property (readonly, nonatomic) id /* block */ holdEndAction;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 asset:(id)a1 mainAction:(id /* block */)a2;
- (id)initWithIdentifier:(id)a0 asset:(id)a1 mainAction:(id /* block */)a2 holdBeganAction:(id /* block */)a3 holdEndAction:(id /* block */)a4;

@end
