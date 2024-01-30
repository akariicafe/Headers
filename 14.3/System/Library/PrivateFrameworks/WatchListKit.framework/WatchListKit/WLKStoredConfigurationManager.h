@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject

@property (retain, nonatomic) WLKStoredConfiguration *storedConfiguration;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateConfiguration:(id)a0;
- (void)_handleLibraryChange:(id)a0;
- (void)_handleAccountChange:(id)a0;
- (void)_setStoredConfiguration:(id)a0;
- (void)_invalidateWithReason:(id)a0;

@end
