@interface BWMeaningfulSubjectDetectionContext : NSObject {
    struct AcDetContext { } *handle;
    struct { unsigned char data[24]; } state;
    struct { struct { unsigned int height; unsigned int width; unsigned int channels; int pixelFormat; float scale; float bias; } netInputBufferDesc[3]; struct { unsigned int height; unsigned int width; unsigned int channels; int pixelFormat; float scale; float bias; } netOutputBufferDescs[3][24]; char netOutputNames[3][24][32]; } params;
    struct { unsigned int originalImageWidth; unsigned int originalImageHeight; int imageOrientation; } control;
    void *detectionPlan;
    struct { void *plan; int network_index; } detectionNetwork;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } detectionOutputs[24];
}

@property (readonly, nonatomic) void *detectionPlan;

+ (void)initialize;

- (void)dealloc;
- (id)initWithDetectionNetworkURL:(id)a0 context:(void **)a1 priority:(int)a2;

@end
