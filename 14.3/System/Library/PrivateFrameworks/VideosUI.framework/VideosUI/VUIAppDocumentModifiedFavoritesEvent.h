@class NSSet;

@interface VUIAppDocumentModifiedFavoritesEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSSet *addedEntityIDs;
@property (copy, nonatomic) NSSet *removedEntityIDs;

- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithAddedEntityIDs:(id)a0 removedEntityIDs:(id)a1;
- (id)initWithAction:(unsigned long long)a0 entityID:(id)a1;
- (id)coalescedEvent:(id)a0;

@end
