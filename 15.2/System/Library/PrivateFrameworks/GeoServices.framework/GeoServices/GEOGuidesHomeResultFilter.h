@class GEOGuidesHomeResultFilterTypeConcept, GEOPDGuidesHomeResultFilter;

@interface GEOGuidesHomeResultFilter : NSObject {
    GEOPDGuidesHomeResultFilter *_resultFilter;
}

@property (readonly, nonatomic) GEOGuidesHomeResultFilterTypeConcept *conceptFilter;
@property (readonly, nonatomic) long long filterType;
@property (readonly, nonatomic) GEOPDGuidesHomeResultFilter *pdResultFilter;

- (id)initWithGuidesHomeResultFilter:(id)a0;
- (void).cxx_destruct;

@end
