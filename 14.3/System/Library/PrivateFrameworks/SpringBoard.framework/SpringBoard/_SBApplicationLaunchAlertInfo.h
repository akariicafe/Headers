@class NSString, NSMutableSet;

@interface _SBApplicationLaunchAlertInfo : NSObject {
    NSString *_bundleID;
    NSMutableSet *_foregroundScenes;
    NSMutableSet *_alertItems;
}

- (void).cxx_destruct;
- (id)description;

@end
