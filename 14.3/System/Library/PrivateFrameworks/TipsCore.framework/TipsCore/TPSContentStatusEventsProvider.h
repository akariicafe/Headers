@class TPSTipStatusController;

@interface TPSContentStatusEventsProvider : TPSEventsProvider {
    TPSTipStatusController *_tipStatusController;
}

- (id)init;
- (void).cxx_destruct;
- (void)queryEvents:(id)a0;

@end
