@class NSArray;
@protocol VCConnectionProtocol;

@interface VCConnectionSelector : NSObject {
    BOOL _isMultiwaySession;
    struct { BOOL preferRelayOverP2P; BOOL preferIPv6OverIPv4; BOOL preferNonVPN; } _connectionSelectionPolicy;
}

@property (retain, nonatomic) id<VCConnectionProtocol> primaryConnection;
@property (retain, nonatomic) id<VCConnectionProtocol> secondaryConnection;
@property (retain, nonatomic) id<VCConnectionProtocol> lastPrimaryConnectionInUse;
@property (retain, nonatomic) id<VCConnectionProtocol> connectionForDuplication;
@property (retain, nonatomic) id<VCConnectionProtocol> connectionForDuplicationNonProbingVersion;
@property (copy, nonatomic) NSArray *linkPreferenceOrder;

- (void)dealloc;
- (void)useConnectionAsPrimary:(id)a0;
- (BOOL)isPrimaryConnectionSameAsConnection:(id)a0;
- (void)updatePrimaryWithConnection:(id)a0;
- (void)updateSecondaryWithConnection:(id)a0;
- (id)initWithMultiwayEnabled:(BOOL)a0;
- (void)updateConnectionForDuplicationForDuplicationReason:(unsigned char)a0 duplicationEnhancementEnabled:(BOOL)a1 preferredLocalInterfaceForDuplication:(int)a2 preferredRemoteInterfaceForDuplication:(int)a3 connectionArray:(id)a4;
- (BOOL)selectPrimaryAndSecondaryWithConnection:(id)a0;
- (struct { BOOL x0; BOOL x1; BOOL x2; } *)getConnectionSelectionPolicy;
- (void)updateConnectionSelectionPolicyWithPreferRelayOverP2P:(BOOL)a0 preferNonVPN:(BOOL)a1;

@end
