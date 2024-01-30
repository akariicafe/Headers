@class NSMutableDictionary;

@interface ARBufferPopulationRegistry : NSObject {
    NSMutableDictionary *_bufferToLabelLUT;
    NSMutableDictionary *_labelToBuffersLUT;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)countWithLabel:(id)a0;
- (id)labelForBufferWithSurfaceID:(id)a0;
- (void)registerBufferWithSurfaceID:(id)a0 label:(id)a1;
- (id)surfaceIDsForBuffersWithLabel:(id)a0;
- (void)unregisterBufferWithSurfaceID:(id)a0;

@end
