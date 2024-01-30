@class PKTransitAppletState, PKTransitPassProperties, NSArray;

@interface NPKPassAssociatedInfo : NSObject

@property (readonly, nonatomic) PKTransitPassProperties *transitProperties;
@property (readonly, nonatomic) PKTransitAppletState *transitAppletState;
@property (readonly, nonatomic) NSArray *balanceFields;
@property (readonly, nonatomic) NSArray *commutePlanFields;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTransitProperties:(id)a0 appletState:(id)a1 balanceFields:(id)a2 commutePlanFields:(id)a3;

@end
