@class NSString;
@protocol NSObject;

@interface PHAssetCrashRecoveryUnarchiver : NSKeyedUnarchiver <PLXPCCoder>

@property (retain) id<NSObject> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
