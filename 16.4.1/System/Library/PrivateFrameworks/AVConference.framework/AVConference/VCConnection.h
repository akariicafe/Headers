@class NSDictionary;

@interface VCConnection : NSObject {
    unsigned short _linkFlags;
    unsigned short _remoteLinkFlags;
    NSDictionary *_connectionSelectionPriorities;
}

- (void)dealloc;
- (id)init;
- (void)setLinkFlags:(unsigned short)a0;
- (long long)compare:(id)a0 isPrimary:(BOOL)a1 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a2;
- (long long)compareConnectionTypePriority:(id)a0 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
- (long long)compareE2EPriority:(id)a0 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
- (long long)compareInterfacePriority:(id)a0 isPrimary:(BOOL)a1;
- (long long)compareIpVersionPriority:(id)a0 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
- (long long)compareVpnPriority:(id)a0 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
- (id)getConnectionSelectionPriorities;
- (void)setRemoteLinkFlags:(unsigned short)a0;

@end
