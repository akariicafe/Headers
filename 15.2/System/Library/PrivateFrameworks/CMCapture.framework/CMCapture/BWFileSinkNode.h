@protocol BWNodeFileWriterStatusDelegate;

@interface BWFileSinkNode : BWSinkNode

@property (nonatomic) id<BWNodeFileWriterStatusDelegate> recordingStatusDelegate;
@property (readonly, nonatomic) unsigned long long lastFileSize;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } lastFileDuration;

@end
