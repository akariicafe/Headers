@class NSMutableDictionary;

@interface ARBufferPopulationRegistry : NSObject {
    NSMutableDictionary *_bufferToLabelLUT;
    NSMutableDictionary *_labelToSignpostTypeLUT;
    NSMutableDictionary *_labelToBuffersLUT;
    NSMutableDictionary *_bufferToTimestampLUT;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (double)timestampForSurfaceID:(id)a0;
- (unsigned long long)countWithLabel:(id)a0;
- (id)labelForBufferWithSurfaceID:(id)a0;
- (void)registerBufferWithSurfaceID:(id)a0 label:(id)a1 signpostType:(id)a2 timestamp:(double)a3;
- (int)signpostTypeForLabel:(id)a0;
- (id)surfaceIDsForBuffersWithLabel:(id)a0;
- (void)unregisterBufferWithSurfaceID:(id)a0;

@end
