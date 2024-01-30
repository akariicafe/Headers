@class TSCH3DAxisGridEnumerator, TSDStroke;

@interface TSCH3DGridlineResource : TSCH3DResource {
    TSCH3DAxisGridEnumerator *mAxis;
}

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) TSDStroke *stroke;
@property (readonly, nonatomic) float opacity;

+ (id)resourceWithAxisEnumerator:(id)a0;

- (id)get;
- (void)dealloc;
- (id)initWithAxisEnumerator:(id)a0;

@end
