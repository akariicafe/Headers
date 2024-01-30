@interface SidecarResponse : SidecarRequest {
    _Atomic BOOL _accepted;
}

- (void)accept;
- (void)_willConnect;
- (void)sendItems:(id)a0;

@end
