@class _OSLogIndex, _OSLogCatalogFilter, _OSLogTracepointBuffer, NSMutableArray;

@interface _OSLogIndexEnumerator : NSObject {
    NSMutableArray *_subchunkStartQ;
    NSMutableArray *_subchunkEndQ;
    NSMutableArray *_catalogStartQ;
    NSMutableArray *_fileStartQ;
    NSMutableArray *_fileEndQ;
    NSMutableArray *_fileBootQ;
    struct os_timesync_range_s *_bounds[6];
    struct os_timesync_range_s { struct os_trace_uuid_map_s *x0; unsigned long long x1; unsigned long long x2; unsigned char x3[0][16]; } *_live_bound;
    _OSLogTracepointBuffer *_tracepoints;
    _OSLogIndex *_index;
    _OSLogCatalogFilter *_catalogFilter;
}

@property (readonly, nonatomic) NSMutableArray *oversizeChunks;

- (void)_initTimesyncBounds:(struct { struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x0; struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x1; struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x2; struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x3; struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x4; struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x5; struct _os_log_index_timeref *x6; struct { struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x0; unsigned char x1; } x7[5]; } *)a0;
- (void)dealloc;
- (void)enumerateTracepointsInRange:(struct os_timesync_range_s { struct os_trace_uuid_map_s *x0; unsigned long long x1; unsigned long long x2; unsigned char x3[0][16]; } *)a0 timesync:(struct _os_timesync_db_s { } *)a1 options:(unsigned int)a2 usingBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithIndex:(id)a0 metadata:(struct { struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x0; struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x1; struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x2; struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x3; struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x4; struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x5; struct _os_log_index_timeref *x6; struct { struct _os_log_index_timeref { unsigned char x0[16]; unsigned long long x1; } x0; unsigned char x1; } x7[5]; } *)a1 fileBootList:(id)a2 catalogFilter:(id)a3;

@end
