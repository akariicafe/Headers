@class NSArray;
@protocol VCConnectionProtocol;

@interface VCConnectionSelector : NSObject {
    BOOL _isMultiwaySession;
    struct { BOOL preferRelayOverP2P; BOOL preferIPv6OverIPv4; BOOL preferNonVPN; BOOL e2eCriteriaEnabled; BOOL preferE2E; } _connectionSelectionPolicy;
    struct { id<VCConnectionProtocol> primaryConnection; id<VCConnectionProtocol> secondaryConnection; } _endToEndLinks;
}

@property (retain, nonatomic) id<VCConnectionProtocol> primaryConnection;
@property (retain, nonatomic) id<VCConnectionProtocol> secondaryConnection;
@property (retain, nonatomic) id<VCConnectionProtocol> lastPrimaryConnectionInUse;
@property (retain, nonatomic) id<VCConnectionProtocol> connectionForDuplication;
@property (retain, nonatomic) id<VCConnectionProtocol> connectionForDuplicationNonProbingVersion;
@property (copy, nonatomic) NSArray *linkPreferenceOrder;
@property (readonly) struct { id<VCConnectionProtocol> primaryConnection; id<VCConnectionProtocol> secondaryConnection; } serverLinks;
@property BOOL canUseP2PLinks;

- (void)dealloc;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)getConnectionSelectionPolicy;
- (id)initWithMultiwayEnabled:(BOOL)a0;
- (BOOL)isPrimaryConnectionSameAsConnection:(id)a0;
- (void)selectConnectionForGroupType:(unsigned char)a0 fromConnectionArray:(id)a1 asPrimary:(BOOL)a2;
- (BOOL)selectPrimaryAndSecondaryWithConnection:(id)a0 isEndToEnd:(BOOL)a1;
- (void)updateConnectionForDuplicationForDuplicationReason:(unsigned char)a0 duplicationEnhancementEnabled:(BOOL)a1 preferredLocalInterfaceForDuplication:(unsigned char)a2 preferredRemoteInterfaceForDuplication:(unsigned char)a3 connectionArray:(id)a4;
- (void)updateConnectionSelectionPolicyWithPreferRelayOverP2P:(BOOL)a0 preferNonVPN:(BOOL)a1 preferE2E:(BOOL)a2;
- (void)updatePrimaryWithConnection:(id)a0;
- (void)updateSecondaryWithConnection:(id)a0;
- (void)updateSelectedConnectionsForGroupType:(unsigned char)a0 connectionAdded:(id)a1;
- (void)updateSelectedConnectionsForGroupType:(unsigned char)a0 connectionRemoved:(id)a1 connectionArray:(id)a2;
- (void)useConnectionAsPrimary:(id)a0;

@end
