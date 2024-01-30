@interface WKFullKeyboardAccessWatcher : NSObject {
    BOOL fullKeyboardAccessEnabled;
}

+ (BOOL)fullKeyboardAccessEnabled;

- (id)init;
- (void)retrieveKeyboardUIModeFromPreferences:(id)a0;
- (void)notifyAllProcessPools;

@end
