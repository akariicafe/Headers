@class NSString, MXMDisplayDescriptor, NSObject;
@protocol MXMDisplayProbePlatformDelegate, OS_dispatch_queue;

@interface MXMDisplayProbe_iphoneOS_Internal : NSObject <MXMDisplayProbePlatform> {
    MXMDisplayDescriptor *_displayDescriptor;
    struct { double timestamp; unsigned long long frameCount; } _lastSample;
    NSObject<OS_dispatch_queue> *_queue;
    double _pollRate;
}

@property (weak, nonatomic) id<MXMDisplayProbePlatformDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_allDescriptors;
+ (unsigned long long)_displayIndexWithDescriptor:(id)a0;

- (void)_start;
- (void)_stop;
- (void).cxx_destruct;
- (void)_loop;
- (struct { double x0; unsigned long long x1; })_pollDisplayForSample;
- (void)_pollMain;
- (id)initPrivateWithDescriptor:(id)a0 queue:(id)a1;

@end
