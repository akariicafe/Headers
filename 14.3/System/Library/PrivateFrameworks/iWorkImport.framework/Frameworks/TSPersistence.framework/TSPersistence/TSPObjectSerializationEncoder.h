@class TSPMemoryComponentWriteChannel, NSString, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_data;

@interface TSPObjectSerializationEncoder : NSObject <TSPEncoder> {
    BOOL _alwaysDefragmentData;
    NSError *_error;
    BOOL _isFinished;
    NSObject<OS_dispatch_queue> *_accessQueue;
    struct ObjectSerializationDirectory { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArena { void *ptr_; } _internal_metadata_; struct HasBits<1> { unsigned int has_bits_[1]; } _has_bits_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int __a_value; } __a_; } size_; } _cached_size_; struct RepeatedPtrField<TSP::ObjectSerializationDirectory_Entry> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } entries_; } _directory;
    TSPMemoryComponentWriteChannel *_metadataWriteChannel;
    TSPMemoryComponentWriteChannel *_rootComponentWriteChannel;
    NSObject<OS_dispatch_data> *_encodedData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithAlwaysDefragmentData:(BOOL)a0;
- (void)appendData:(id)a0 completion:(id /* block */)a1;
- (void)finishEncodingWithCompletion:(id /* block */)a0;
- (id)newRootObjectComponentWriteChannel;
- (id)newMetadataComponentWriteChannel;

@end
