@interface _RCTimeRangeFileInputWaveformDataSource : RCFileInputWaveformDataSource

@property (nonatomic) BOOL isDecomposedFragment;

- (void)saveGeneratedWaveformIfNecessary;

@end
