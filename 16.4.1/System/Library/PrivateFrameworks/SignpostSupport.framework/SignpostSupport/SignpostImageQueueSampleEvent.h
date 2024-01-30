@interface SignpostImageQueueSampleEvent : NSObject <SignpostCARenderServerFrameMetadata>

@property (readonly, nonatomic) unsigned int queueID;
@property (readonly, nonatomic) unsigned int surfaceID;
@property (readonly, nonatomic) double serverSamplingTime;
@property (readonly, nonatomic) unsigned int queueGeneration;
@property (readonly, nonatomic) unsigned int frameSeed;

- (id)initWithImageQueueSampleEvent:(id)a0;

@end
