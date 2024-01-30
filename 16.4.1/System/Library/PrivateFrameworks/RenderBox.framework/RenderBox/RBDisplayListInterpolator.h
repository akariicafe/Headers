@class NSDictionary;
@protocol RBDisplayListContents;

@interface RBDisplayListInterpolator : NSObject {
    struct DisplayListInterpolator { struct Transition { unsigned char method; BOOL implicit; unsigned char _add_remove_duration; unsigned int max_changes; struct vector<RB::Transition::EffectOrArg, 4UL, unsigned int> { unsigned char _p[16]; union EffectOrArg)"_size"I"_capacity"I { } *_p; unsigned int _size; unsigned int _capacity; } effects_and_args; } default_transition; struct vector<RB::DisplayListInterpolator::Op, 4UL, unsigned int> { unsigned char _p[192]; struct Op *_p; unsigned int _size; unsigned int _capacity; } ops; unsigned char ops_types; struct vector<RB::Rect, 2UL, unsigned int> { unsigned char _p[32]; struct Rect *_p; unsigned int _size; unsigned int _capacity; } rects; BOOL valid; BOOL has_identity; BOOL non_fade_effects; } _interp;
    struct objc_ptr<id<RBDisplayListContents>> { id<RBDisplayListContents> _p; } _from;
    struct objc_ptr<id<RBDisplayListContents>> { id<RBDisplayListContents> _p; } _to;
    struct objc_ptr<NSDictionary *> { NSDictionary *_p; } _options;
}

@property (readonly, nonatomic) id<RBDisplayListContents> from;
@property (readonly, nonatomic) id<RBDisplayListContents> to;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic, getter=isIdentity) BOOL identity;
@property (readonly, nonatomic) BOOL onlyFades;

+ (id)interpolatorWithFrom:(id)a0 to:(id)a1 options:(id)a2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawInState:(struct _RBDrawingState { } *)a0 by:(float)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectWithProgress:(float)a0;
- (id)contentsWithProgress:(float)a0;

@end
