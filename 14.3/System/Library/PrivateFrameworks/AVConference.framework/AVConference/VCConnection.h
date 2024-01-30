@class NSDictionary;

@interface VCConnection : NSObject {
    NSDictionary *_connectionSelectionPriorities;
}

- (id)init;
- (void)dealloc;
- (long long)compare:(id)a0 isPrimary:(BOOL)a1 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; } *)a2;
- (id)getConnectionSelectionPriorities;
- (long long)compareInterfacePriority:(id)a0 isPrimary:(BOOL)a1;
- (long long)compareConnectionTypePriority:(id)a0 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; } *)a1;
- (long long)compareIpVersionPriority:(id)a0 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; } *)a1;
- (long long)compareVpnPriority:(id)a0 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; } *)a1;

@end
