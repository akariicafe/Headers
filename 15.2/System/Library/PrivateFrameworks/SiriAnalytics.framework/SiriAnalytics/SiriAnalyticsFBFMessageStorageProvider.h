@class NSString;

@interface SiriAnalyticsFBFMessageStorageProvider : NSObject <SiriAnalyticsMessageStorage> {
    NSString *_applicationIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithApplicationIdentifier:(id)a0;
- (void)storeMessages:(id)a0;

@end
