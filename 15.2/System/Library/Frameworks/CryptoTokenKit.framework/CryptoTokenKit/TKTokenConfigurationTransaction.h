@class TKTokenConfigurationConnection;

@interface TKTokenConfigurationTransaction : NSObject {
    TKTokenConfigurationConnection *_configurationConnection;
}

- (void)commit;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfigurationConnection:(id)a0;

@end
