@interface TSURectList : NSObject {
    struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } mRectList;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)rectListWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectAtIndex:(unsigned long long)a0;
- (id)initWithRectList:(id)a0;

@end
