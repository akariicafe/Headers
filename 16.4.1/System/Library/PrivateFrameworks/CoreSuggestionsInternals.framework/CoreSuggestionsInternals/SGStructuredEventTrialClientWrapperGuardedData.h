@class NSDictionary;

@interface SGStructuredEventTrialClientWrapperGuardedData : NSObject {
    NSDictionary *_supportedProviders;
    NSDictionary *_engineConfig;
    NSDictionary *_structuredEventInputMapping;
    NSDictionary *_structuredEventOutputMapping;
    BOOL _foundInMailNotifications;
}

- (void).cxx_destruct;

@end
