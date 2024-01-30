@class NSSet;

@interface VUIAppDocumentModifiedUpNextEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSSet *addedCanonicalIDs;
@property (copy, nonatomic) NSSet *removedCanonicalIDs;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDescriptor:(id)a0;
- (id)dictionaryRepresentation;
- (id)coalescedEvent:(id)a0;
- (id)initWithAction:(unsigned long long)a0 canonicalID:(id)a1;
- (id)initWithAddedCanonicalIDs:(id)a0 removedCanonicalIDs:(id)a1;

@end
