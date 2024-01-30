@class NSError, NSObject, GEOZilchDecoder;
@protocol OS_dispatch_semaphore;

@interface GEOZilchDecoderRequest : GEOMapRequest {
    struct unique_ptr<geo::ZilchMapModel, std::default_delete<geo::ZilchMapModel>> { struct __compressed_pair<geo::ZilchMapModel *, std::default_delete<geo::ZilchMapModel>> { struct ZilchMapModel *__value_; } __ptr_; } _mapModel;
    GEOZilchDecoder *_decoder;
    struct shared_ptr<zilch::Message> { struct Message *__ptr_; struct __shared_weak_count *__cntrl_; } _message;
    NSError *_firstTileLoadingError;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
}

@property (copy) id /* block */ pathHandler;
@property (copy) id /* block */ errorHandler;

- (void).cxx_destruct;
- (id)initWithDecoder:(id)a0 message:(struct shared_ptr<zilch::Message> { struct Message *x0; struct __shared_weak_count *x1; })a1;
- (void)decodeWithPathHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)cancel;
- (id).cxx_construct;
- (void)_finishedDecodingWithPath:(struct Path<std::shared_ptr<geo::MapEdge>> { struct GeoCoordinates { struct Longitude { unsigned int x0; } x0; struct Latitude { unsigned int x0; } x1; int x2; } x0; struct GeoCoordinates { struct Longitude { unsigned int x0; } x0; struct Latitude { unsigned int x0; } x1; int x2; } x1; struct vector<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>> { void *x0; void *x1; struct __compressed_pair<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>> *, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>> { void *x0; } x2; } x2; struct vector<zilch::GeometryPathElement, std::allocator<zilch::GeometryPathElement>> { struct GeometryPathElement *x0; struct GeometryPathElement *x1; struct __compressed_pair<zilch::GeometryPathElement *, std::allocator<zilch::GeometryPathElement>> { struct GeometryPathElement *x0; } x2; } x3; struct vector<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry, std::allocator<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry *, std::allocator<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry>> { struct Entry *x0; } x2; } x4; })a0;

@end
