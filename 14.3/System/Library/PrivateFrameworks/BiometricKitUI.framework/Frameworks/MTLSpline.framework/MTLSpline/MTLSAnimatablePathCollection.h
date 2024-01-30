@class MTLSPath, NSMutableDictionary;

@interface MTLSAnimatablePathCollection : NSObject {
    struct vector<ControlPoint, std::__1::allocator<ControlPoint> > { struct ControlPoint *__begin_; struct ControlPoint *__end_; struct __compressed_pair<ControlPoint *, std::__1::allocator<ControlPoint> > { struct ControlPoint *__value_; } __end_cap_; } _controlPointStateVector;
}

@property (readonly) NSMutableDictionary *paths;
@property (readonly) MTLSPath *defaultPath;
@property (nonatomic) struct ControlPoint { float x0; } *controlPointState;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)removePath:(id)a0;
- (id)initWithDefaultPath:(id)a0;
- (void)setPath:(id)a0 forKey:(id)a1;
- (struct ControlPoint { float x0; } *)blendPath:(id)a0 withPath:(id)a1 byAmount:(float)a2;

@end
