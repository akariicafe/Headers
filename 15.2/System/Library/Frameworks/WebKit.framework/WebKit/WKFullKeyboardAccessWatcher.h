@interface WKFullKeyboardAccessWatcher : NSObject {
    BOOL fullKeyboardAccessEnabled;
}

+ (BOOL)fullKeyboardAccessEnabled;

- (void)notifyAllProcessPools;
- (void)retrieveKeyboardUIModeFromPreferences:(id)a0;
- (id)init;

@end
