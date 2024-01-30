@class NSString, TSPMemoryComponentWriteChannel, NSObject;
@protocol OS_dispatch_data;

@interface TSPMemoryEncoder : NSObject <TSPEncoder> {
    BOOL _alwaysDefragmentData;
    TSPMemoryComponentWriteChannel *_metadataWriteChannel;
    TSPMemoryComponentWriteChannel *_rootComponentWriteChannel;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *metadataDispatchData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *rootObjectComponentDispatchData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)metadataData;
- (id)encodedData;
- (id)initWithAlwaysDefragmentData:(BOOL)a0;
- (id)newRootObjectComponentWriteChannel;
- (id)newMetadataComponentWriteChannel;
- (id)rootObjectComponentData;

@end
