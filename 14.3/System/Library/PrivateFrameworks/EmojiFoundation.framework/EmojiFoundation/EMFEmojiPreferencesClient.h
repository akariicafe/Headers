@class NSString, NSXPCConnection;

@interface EMFEmojiPreferencesClient : EMFEmojiPreferences {
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSString *machName;
@property (nonatomic) BOOL isValid;

+ (id)serviceInterface;
+ (id)differentialPrivacyRecorderForEmoji:(id)a0 usageMode:(id)a1;

- (void)createConnectionIfNecessary;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didDisplaySkinToneHelp;
- (void)writeEmojiDefaults;
- (void)_disconnect;
- (id)_initWithoutConnection;
- (void)didViewEmojiIndex:(long long)a0 forCategory:(id)a1;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1 typingName:(id)a2;
- (id)initWithMachName:(id)a0;
- (void)didUseEmoji:(id)a0;

@end
