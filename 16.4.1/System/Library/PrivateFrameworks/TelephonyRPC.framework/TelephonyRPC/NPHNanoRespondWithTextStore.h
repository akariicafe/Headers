@class NSUserDefaults;

@interface NPHNanoRespondWithTextStore : NSObject {
    NSUserDefaults *_userDefaults;
}

- (unsigned long long)count;
- (id)init;
- (void).cxx_destruct;
- (id)customReplies;
- (id)cannedRepliesForLanguage:(id)a0;
- (id)defaultRepliesForLanguage:(id)a0;

@end
