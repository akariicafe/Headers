@class NSHashTable, NSObject, Protocol;
@protocol OS_os_log, HKDataFlowLinkProcessor;

@interface HKDataFlowLink : NSObject {
    NSHashTable *_sources;
    NSHashTable *_destinations;
    NSObject<OS_os_log> *_category;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<HKDataFlowLinkProcessor> processor;
@property (readonly, nonatomic) Protocol *sourceProtocol;
@property (readonly, nonatomic) Protocol *destinationProtocol;

- (void)removeSource:(id)a0;
- (void)addDestination:(id)a0;
- (void)removeDestination:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addSource:(id)a0;
- (id)allDestinationProcessors;
- (id)allSourceProcessors;
- (void)destination:(id)a0 didAddDownstreamDestination:(id)a1;
- (id)destinationProcessorsConformingToProtocol:(id)a0;
- (id)initWithProcessor:(id)a0 sourceProtocol:(id)a1 destinationProtocol:(id)a2 loggingCategory:(id)a3;
- (void)sendToDestinationProcessors:(id /* block */)a0;
- (void)source:(id)a0 didAddUpstreamSource:(id)a1;

@end
