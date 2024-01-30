@class NSSet;

@interface HDSampleCountQueryServer : HDQueryServer {
    NSSet *_sampleQueryDescriptions;
}

+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;

@end
