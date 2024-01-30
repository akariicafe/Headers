@class VIObjectCategory, NSString, VIOntologyNode, VIObjectKnowledge;

@interface VIRegionOfInterestResultItem : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) VIObjectCategory *objectCategory;
@property (readonly, nonatomic) VIOntologyNode *ontologyNode;
@property (readonly, nonatomic) VIObjectKnowledge *objectKnowledge;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDomain:(id)a0 ontologyNode:(id)a1 objectKnowledge:(id)a2;

@end
