@interface AVAssetWriterClientInitiatedTerminalHelper : AVAssetWriterTerminalHelper {
    long long _terminalStatus;
}

- (id)initWithConfigurationState:(id)a0 terminalStatus:(long long)a1;
- (long long)status;
- (id)initWithConfigurationState:(id)a0;

@end
