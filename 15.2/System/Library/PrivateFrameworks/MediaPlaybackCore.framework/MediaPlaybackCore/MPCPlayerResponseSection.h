@class MPCPlayerResponse, MPModelGenericObject;

@interface MPCPlayerResponseSection : NSObject

@property (readonly, nonatomic, getter=isAutoPlaySection) BOOL autoPlaySection;
@property (readonly, weak, nonatomic) MPCPlayerResponse *response;
@property (readonly, nonatomic) MPModelGenericObject *metadataObject;

- (id)remove;
- (void).cxx_destruct;
- (id)initWithModelGenericObject:(id)a0 sectionIndex:(long long)a1 response:(id)a2;

@end
