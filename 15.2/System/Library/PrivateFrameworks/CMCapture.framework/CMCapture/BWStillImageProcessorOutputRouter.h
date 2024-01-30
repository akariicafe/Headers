@class NSArray, NSMutableArray;

@interface BWStillImageProcessorOutputRouter : NSObject {
    NSMutableArray *_bypassedProcessorTypes;
}

@property (readonly, nonatomic) id /* block */ outputSampleBufferRouter;
@property (readonly, nonatomic) NSArray *bypassedProcessorsTypes;

- (void)dealloc;
- (id)initWithOutputSampleBufferRouter:(id /* block */)a0;
- (id)initByRetainingOutputSampleBufferRouter:(id /* block */)a0;
- (void)addBypassedProcessorType:(unsigned long long)a0;

@end
