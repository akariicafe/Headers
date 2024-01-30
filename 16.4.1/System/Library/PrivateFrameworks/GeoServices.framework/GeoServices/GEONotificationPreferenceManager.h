@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary *_enableFlags;
}

+ (id)sharedManager;

- (BOOL)isEnabledForSubTestWithName:(id)a0;
- (void)setEnabled:(BOOL)a0 forSubTestWithName:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)reset;

@end
