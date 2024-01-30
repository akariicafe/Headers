@class NSObject;
@protocol OS_os_log;

@interface GEOGloriaDB : NSObject {
    NSObject<OS_os_log> *_log;
    struct unique_ptr<gloria::DB, std::default_delete<gloria::DB>> { struct __compressed_pair<gloria::DB *, std::default_delete<gloria::DB>> { struct DB *__value_; } __ptr_; } _db;
    struct TileId { unsigned long long tile_id_; unsigned char zoom_; } _rootTileId;
    Class _metadataClass;
    Class _dataClass;
}

- (BOOL)unsafeDataForQuadKeyNum:(id)a0 result:(id /* block */)a1;
- (id)_dataForQuadKey:(unsigned long long)a0 ofType:(Class)a1;
- (id)initWithFileURL:(id)a0 rootQuadKey:(unsigned long long)a1 log:(id)a2;
- (BOOL)enumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 visitor:(id /* block */)a2;
- (BOOL)unsafeEnumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 visitor:(id /* block */)a2;
- (id)metadata;
- (id)dataForQuadKey:(unsigned long long)a0;
- (BOOL)unsafeDataForQuadKey:(unsigned long long)a0 result:(id /* block */)a1;
- (id)initWithFileURL:(id)a0 rootQuadKey:(unsigned long long)a1 metadataClass:(Class)a2 dataClass:(Class)a3 log:(id)a4;
- (void).cxx_destruct;
- (BOOL)containsQuadKey:(unsigned long long)a0;
- (BOOL)_unsafeDataForQuadKey:(unsigned long long)a0 ofType:(Class)a1 result:(id /* block */)a2;
- (BOOL)unsafeEnumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 zoom:(unsigned char)a2 visitor:(id /* block */)a3;
- (BOOL)enumerateDataAtLocation:(struct { double x0; double x1; })a0 radius:(double)a1 zoom:(unsigned char)a2 visitor:(id /* block */)a3;
- (BOOL)unsafeMetadata:(id /* block */)a0;
- (BOOL)containsQuadKeyNum:(id)a0;
- (id).cxx_construct;
- (id)dataForQuadKeyNum:(id)a0;

@end
