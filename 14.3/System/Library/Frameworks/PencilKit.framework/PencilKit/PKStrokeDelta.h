@class PKStrokePath, NSUUID, PKStroke;

@interface PKStrokeDelta : NSObject

@property (retain, nonatomic) PKStroke *deltaStroke;
@property (retain, nonatomic) PKStrokePath *deltaStrokeData;
@property (retain, nonatomic) NSUUID *_strokeUUID;

- (void).cxx_destruct;
- (id)initWithArchive:(const struct StrokeDelta { void /* function */ **x0; struct unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > { struct __compressed_pair<drawing::Ink *, std::__1::default_delete<drawing::Ink> > { struct Ink *x0; } x0; } x1; struct vector<PB::Data, std::__1::allocator<PB::Data> > { struct Data *x0; struct Data *x1; struct __compressed_pair<PB::Data *, std::__1::allocator<PB::Data> > { struct Data *x0; } x2; } x2; struct unique_ptr<drawing::Stroke, std::__1::default_delete<drawing::Stroke> > { struct __compressed_pair<drawing::Stroke *, std::__1::default_delete<drawing::Stroke> > { struct Stroke *x0; } x0; } x3; struct unique_ptr<drawing::StrokeData, std::__1::default_delete<drawing::StrokeData> > { struct __compressed_pair<drawing::StrokeData *, std::__1::default_delete<drawing::StrokeData> > { struct StrokeData *x0; } x0; } x4; } *)a0 error:(id *)a1;
- (id)description;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (void)saveToArchive:(struct StrokeDelta { void /* function */ **x0; struct unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink> > { struct __compressed_pair<drawing::Ink *, std::__1::default_delete<drawing::Ink> > { struct Ink *x0; } x0; } x1; struct vector<PB::Data, std::__1::allocator<PB::Data> > { struct Data *x0; struct Data *x1; struct __compressed_pair<PB::Data *, std::__1::allocator<PB::Data> > { struct Data *x0; } x2; } x2; struct unique_ptr<drawing::Stroke, std::__1::default_delete<drawing::Stroke> > { struct __compressed_pair<drawing::Stroke *, std::__1::default_delete<drawing::Stroke> > { struct Stroke *x0; } x0; } x3; struct unique_ptr<drawing::StrokeData, std::__1::default_delete<drawing::StrokeData> > { struct __compressed_pair<drawing::StrokeData *, std::__1::default_delete<drawing::StrokeData> > { struct StrokeData *x0; } x0; } x4; } *)a0;

@end
