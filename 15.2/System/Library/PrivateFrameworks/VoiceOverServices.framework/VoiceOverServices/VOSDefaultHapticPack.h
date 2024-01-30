@class NSDictionary, NSString;

@interface VOSDefaultHapticPack : NSObject <VOSHapticPack>

@property (readonly, nonatomic) NSDictionary *eventToHapticFilenameMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hapticAssetURLForOutputEvent:(id)a0;

@end
