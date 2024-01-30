@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary *_enableFlags;
}

+ (id)sharedManager;

- (BOOL)isEnabledForSubTestWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setEnabled:(BOOL)a0 forSubTestWithName:(id)a1;
- (void)reset;

@end
