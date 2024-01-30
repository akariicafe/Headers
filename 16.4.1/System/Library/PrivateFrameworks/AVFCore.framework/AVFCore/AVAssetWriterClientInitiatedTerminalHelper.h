@interface AVAssetWriterClientInitiatedTerminalHelper : AVAssetWriterTerminalHelper {
    long long _terminalStatus;
}

- (id)initWithConfigurationState:(id)a0 terminalStatus:(long long)a1;
- (id)initWithConfigurationState:(id)a0;
- (long long)status;

@end
