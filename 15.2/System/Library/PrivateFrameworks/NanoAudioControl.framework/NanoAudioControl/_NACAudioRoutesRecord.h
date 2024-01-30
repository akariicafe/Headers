@class NSArray, NSMutableSet;

@interface _NACAudioRoutesRecord : NSObject

@property (retain, nonatomic) NSArray *audioRoutes;
@property (retain, nonatomic) NSArray *deferredAudioRoutes;
@property (retain, nonatomic) NSMutableSet *observers;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;

@end
