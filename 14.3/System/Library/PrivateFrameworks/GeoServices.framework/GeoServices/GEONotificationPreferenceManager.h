@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary *_enableFlags;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEnabledForSubTestWithName:(id)a0;
- (void)reset;
- (void)setEnabled:(BOOL)a0 forSubTestWithName:(id)a1;

@end
