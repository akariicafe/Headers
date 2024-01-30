@class DSClientMotionDataOptions;

@interface DSListenerDevice : DSRapportDevice

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) DSClientMotionDataOptions *inOptions;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)initWithRapportDevice:(id)a0 queue:(id)a1;

@end
