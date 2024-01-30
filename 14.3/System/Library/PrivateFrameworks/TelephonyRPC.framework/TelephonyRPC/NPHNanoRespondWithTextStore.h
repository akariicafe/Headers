@class NSUserDefaults;

@interface NPHNanoRespondWithTextStore : NSObject {
    NSUserDefaults *_userDefaults;
}

- (id)init;
- (void).cxx_destruct;
- (id)customReplies;
- (unsigned long long)count;
- (id)defaultRepliesForLanguage:(id)a0;
- (id)cannedRepliesForLanguage:(id)a0;

@end
