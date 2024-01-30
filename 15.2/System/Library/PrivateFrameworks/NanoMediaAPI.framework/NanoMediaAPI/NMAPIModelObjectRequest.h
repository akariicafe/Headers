@class MPModelObject;

@interface NMAPIModelObjectRequest : NMAPIRequest

@property (retain, nonatomic) MPModelObject *modelObject;

- (id)urlComponentsWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseParserClass;
- (id)initWithModelObject:(id)a0;

@end
