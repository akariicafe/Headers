@class OspreyKeychain;

@interface OspreyPreferences : NSObject {
    OspreyKeychain *_keychain;
}

- (id)connections;
- (void).cxx_destruct;
- (void)synchronize;
- (id)initWithKeychain:(id)a0;
- (id)connectionPreferencesForHost:(id)a0;
- (void)deleteConnectionPreferencesForHost:(id)a0;
- (void)setConnectionPreferences:(id)a0;

@end
