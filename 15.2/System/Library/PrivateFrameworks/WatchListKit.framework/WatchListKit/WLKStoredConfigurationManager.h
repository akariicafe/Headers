@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject

@property (retain, nonatomic) WLKStoredConfiguration *storedConfiguration;

+ (id)sharedInstance;

- (void)_updateConfiguration:(id)a0;
- (void)_handleAccountChange:(id)a0;
- (void)_setStoredConfiguration:(id)a0;
- (void)_handleLibraryChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_invalidateWithReason:(id)a0;
- (void)dealloc;

@end
