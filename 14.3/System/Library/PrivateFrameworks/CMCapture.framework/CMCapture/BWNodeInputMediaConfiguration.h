@class NSString, BWFormatRequirements;

@interface BWNodeInputMediaConfiguration : NSObject {
    NSString *_associatedAttachedMediaKey;
}

@property (retain, nonatomic) BWFormatRequirements *formatRequirements;
@property (nonatomic) int passthroughMode;
@property (nonatomic) BOOL conversionToPassthroughModeNeverAllowed;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) int delayedBufferCount;
@property (nonatomic) int indefinitelyHeldBufferCount;

- (id)init;
- (void)dealloc;
- (void)_setAssociatedAttachedMediaKey:(id)a0;

@end
