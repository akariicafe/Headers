@class NSFetchRequest, NSSet, NSManagedObjectID;

@interface _PHFetchRequestWrapper : NSObject <NSCopying>

@property (readonly, nonatomic) NSFetchRequest *fetchRequest;
@property (readonly, nonatomic) NSManagedObjectID *containerIdentifier;
@property (readonly, nonatomic) NSSet *fetchPropertySets;
@property (readonly, nonatomic) unsigned long long hash;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFetchRequest:(id)a0 containerIdentifier:(id)a1 fetchPropertySets:(id)a2;
- (BOOL)isEqual:(id)a0;

@end
