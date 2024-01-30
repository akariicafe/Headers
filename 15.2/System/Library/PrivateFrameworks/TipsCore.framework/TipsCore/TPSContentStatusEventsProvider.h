@class TPSTipStatusController;

@interface TPSContentStatusEventsProvider : TPSEventsProvider {
    TPSTipStatusController *_tipStatusController;
}

- (void)queryEvents:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isStatus:(id)a0 observedForType:(long long)a1;

@end
