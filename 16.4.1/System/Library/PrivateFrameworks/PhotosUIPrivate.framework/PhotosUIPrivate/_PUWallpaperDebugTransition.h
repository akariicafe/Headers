@class NSString;
@protocol NSObject;

@interface _PUWallpaperDebugTransition : NSObject <PUWallpaperTransition>

@property (retain, nonatomic) id<NSObject> animationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
