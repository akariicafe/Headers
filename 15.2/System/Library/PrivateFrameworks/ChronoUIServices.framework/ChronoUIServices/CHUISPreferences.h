@class NSUserDefaults;

@interface CHUISPreferences : NSObject {
    NSUserDefaults *_defaults;
}

@property (readonly, nonatomic) BOOL debugViewLabels;
@property (readonly, nonatomic) BOOL debugSnapshotViewColoring;
@property (readonly, nonatomic) BOOL debugPrefersStaticSnapshots;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
