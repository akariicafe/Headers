@interface RBXMLRecorder_Shape : RBShape {
    struct vector<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> >, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > > { struct pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > *__begin_; struct pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > *__end_; struct __compressed_pair<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > *, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > > { struct pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > *__value_; } __end_cap_; } _attributes;
    unsigned int _seed;
}

- (void)setEmpty;
- (void)setEllipseInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerSize:(struct CGSize { double x0; double x1; })a1 cornerStyle:(int)a2;
- (void)setStrokedPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 lineWidth:(double)a2 lineCap:(int)a3 lineJoin:(int)a4 miterLimit:(double)a5 dashPhase:(double)a6 dashPattern:(const double *)a7 dashCount:(long long)a8;
- (void)setStrokedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (void)setStrokedRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 cornerStyle:(int)a2 lineWidth:(double)a3;
- (void)setStrokedCircleAtPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 lineWidth:(double)a2;
- (void).cxx_destruct;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;
- (void)setInfinite;
- (void)setCircleAtPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
- (void)setPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadii:(struct { double x0; double x1; double x2; double x3; })a1 cornerStyle:(int)a2;
- (void)setStrokedRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadii:(struct { double x0; double x1; double x2; double x3; })a1 cornerStyle:(int)a2 lineWidth:(double)a3;
- (void)setGlyphs:(const unsigned short *)a0 positions:(const struct CGPoint { double x0; double x1; } *)a1 count:(unsigned long long)a2 font:(struct CGFont { } *)a3 renderingStyle:(unsigned int)a4;
- (void)setStroke:(id)a0;
- (void)encodeTo:(struct Tree { struct refcounted_ptr<RB::XMLRecorder::Element> { struct Element *x0; } x0; struct stack<RB::XMLRecorder::Element *, std::__1::deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > > { struct deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > { struct __split_buffer<RB::XMLRecorder::Element **, std::__1::allocator<RB::XMLRecorder::Element **> > { struct Element ***x0; struct Element ***x1; struct Element ***x2; struct __compressed_pair<RB::XMLRecorder::Element ***, std::__1::allocator<RB::XMLRecorder::Element **> > { struct Element ***x0; } x3; } x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<RB::XMLRecorder::Element *> > { unsigned long long x0; } x2; } x0; } x1; } *)a0;

@end
