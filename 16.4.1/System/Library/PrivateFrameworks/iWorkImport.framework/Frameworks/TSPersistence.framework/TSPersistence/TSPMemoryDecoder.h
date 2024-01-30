@class NSString, NSObject;
@protocol TSPMemoryDecoderDelegate, OS_dispatch_data;

@interface TSPMemoryDecoder : NSObject <TSPDecoder> {
    id<TSPMemoryDecoderDelegate> _delegate;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *metadataDispatchData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *rootObjectComponentDispatchData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEncodedData:(id)a0 delegate:(id)a1;
- (id)initWithMetadataDispatchData:(id)a0 rootObjectComponentDispatchData:(id)a1 delegate:(id)a2;
- (id)newReadChannelForDataWithIdentifier:(long long)a0 info:(id)a1;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForRootObjectComponent;

@end
