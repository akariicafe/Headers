@interface _EARGeoLMHelper : NSObject {
    struct unique_ptr<quasar::Geography, std::default_delete<quasar::Geography>> { struct __compressed_pair<quasar::Geography *, std::default_delete<quasar::Geography>> { struct Geography *__value_; } __ptr_; } _geography;
}

- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)regionIdForLatitude:(double)a0 longitude:(double)a1;

@end
