@class NSArray, NSHashTable;

@interface AVCaptureSessionConfiguration : NSObject

@property (readonly) long long configurationID;
@property (readonly) NSArray *inputs;
@property (readonly) NSArray *outputs;
@property (readonly) NSHashTable *videoPreviewLayers;
@property (readonly) NSArray *connections;

- (id)uniqueConnections:(id)a0;
- (id)initWithConfigurationID:(long long)a0 inputs:(id)a1 outputs:(id)a2 videoPreviewLayers:(id)a3 connections:(id)a4;
- (id)uniqueInputs:(id)a0;
- (id)uniqueOutputs:(id)a0;
- (void)dealloc;
- (id)uniqueVideoPreviewLayers:(id)a0;

@end
