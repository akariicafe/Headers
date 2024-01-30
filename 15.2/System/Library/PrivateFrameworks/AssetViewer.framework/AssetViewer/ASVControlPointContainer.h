@interface ASVControlPointContainer : NSObject {
    struct vector<ASVControlPoint, std::allocator<ASVControlPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<ASVControlPoint *, std::allocator<ASVControlPoint>> { struct *__value_; } __end_cap_; } _controlPoints;
}

@property (readonly, nonatomic) struct { float x0; } *controlPoints;
@property (readonly, nonatomic) unsigned int numControlPoints;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)overwriteWithControlPoints:(struct { float x0; } *)a0 numControlPoints:(int)a1;
- (id)initWithControlPoints:(struct { float x0; } *)a0 numControlPoints:(int)a1;

@end
