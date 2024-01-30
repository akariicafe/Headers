@interface BWSWFRProcessorControllerRequest : BWStillImageProcessorControllerRequest

@property (nonatomic) int demosaicedRawErr;

- (BOOL)readyForProcessing;

@end
