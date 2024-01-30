@class TKTokenConfigurationConnection;

@interface TKTokenConfigurationTransaction : NSObject {
    TKTokenConfigurationConnection *_configurationConnection;
}

- (void)commit;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfigurationConnection:(id)a0;

@end
