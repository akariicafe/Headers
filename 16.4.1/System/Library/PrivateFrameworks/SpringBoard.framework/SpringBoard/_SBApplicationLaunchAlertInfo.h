@class NSString, NSMutableSet;

@interface _SBApplicationLaunchAlertInfo : NSObject {
    NSString *_bundleID;
    NSMutableSet *_foregroundScenes;
    NSMutableSet *_alertItems;
}

- (id)description;
- (void).cxx_destruct;

@end
