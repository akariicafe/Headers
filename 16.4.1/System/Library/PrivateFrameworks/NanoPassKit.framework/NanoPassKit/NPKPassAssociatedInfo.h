@class PKTransitAppletState, PKTransitPassProperties, NSArray;

@interface NPKPassAssociatedInfo : NSObject

@property (readonly, nonatomic) PKTransitPassProperties *transitProperties;
@property (readonly, nonatomic) PKTransitAppletState *transitAppletState;
@property (readonly, nonatomic) NSArray *balanceFields;
@property (readonly, nonatomic) NSArray *commutePlanFields;
@property (readonly, nonatomic) NSArray *tiles;
@property (readonly, nonatomic) unsigned long long rangingSuspensionReason;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTransitProperties:(id)a0 appletState:(id)a1 balanceFields:(id)a2 commutePlanFields:(id)a3 tiles:(id)a4 rangingSuspensionReason:(unsigned long long)a5;

@end
