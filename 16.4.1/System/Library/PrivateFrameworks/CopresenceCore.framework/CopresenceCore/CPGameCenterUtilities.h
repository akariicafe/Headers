@class CPThreadSafeMutableSet;

@interface CPGameCenterUtilities : NSObject

@property (readonly, nonatomic) CPThreadSafeMutableSet *supportedBundleIDs;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)fetchGameCenterMultiplayerGameStatusForBundleID:(id)a0 handler:(id /* block */)a1;
- (void)fetchOnDeviceMultiplayerBundleIDsWithHandler:(id /* block */)a0;
- (BOOL)supportsBundleID:(id)a0;

@end
