@class NSString, NSXPCConnection;

@interface EMFEmojiPreferencesClient : EMFEmojiPreferences {
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSString *machName;
@property (nonatomic) BOOL isValid;

+ (id)serviceInterface;
+ (id)differentialPrivacyRecorderForEmoji:(id)a0 usageMode:(id)a1;

- (void)_disconnect;
- (void)createConnectionIfNecessary;
- (id)initWithMachName:(id)a0;
- (void).cxx_destruct;
- (void)didDisplaySkinToneHelp;
- (void)dealloc;
- (void)writeEmojiDefaults;
- (id)_initWithoutConnection;
- (void)didViewEmojiIndex:(long long)a0 forCategory:(id)a1;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1 typingName:(id)a2;
- (void)writeEmojiDefaultsAndNotify:(BOOL)a0;
- (void)didUseEmoji:(id)a0;

@end
