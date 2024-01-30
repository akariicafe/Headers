@class NSArray, BWFormatRequirements, NSString;

@interface BWNodeOutputMediaConfiguration : NSObject {
    NSString *_associatedAttachedMediaKey;
    NSArray *_indexesOfInputsWhichDrivesThisOutput;
    NSString *_attachedMediaKeyOfInputWhichDrivesThisOutput;
    int _indexOfInputWhichDrivesThisOutput;
    BOOL _performsAttachedMediaRemapping;
}

@property (retain, nonatomic) BWFormatRequirements *formatRequirements;
@property (nonatomic) BOOL providesPixelBufferPool;
@property (nonatomic) BOOL providesDataBufferPool;
@property (nonatomic) BOOL pixelBufferPoolProvidesBackPressure;
@property (nonatomic) int passthroughMode;
@property (nonatomic) int indexOfInputWhichDrivesThisOutput;
@property (copy, nonatomic) NSArray *indexesOfInputsWhichDrivesThisOutput;
@property (readonly, nonatomic) BOOL performsAttachedMediaRemapping;
@property (copy, nonatomic) NSString *attachedMediaKeyOfInputWhichDrivesThisOutput;
@property (nonatomic) int owningNodeRetainedBufferCount;

- (id)init;
- (void)dealloc;
- (BOOL)isDrivenByInputWithIndex:(unsigned long long)a0;
- (void)_setAssociatedAttachedMediaKey:(id)a0;

@end
