@class NSSet, NSString, NSFetchRequest, NSEntityDescription;

@interface WFDatabaseResultFetchRequestOperation : NSObject <WFDatabaseResultFetchOperation>

@property (readonly, nonatomic) NSFetchRequest *fetchRequest;
@property (readonly, nonatomic) NSEntityDescription *entity;
@property (readonly, nonatomic) NSSet *relationshipKeysAffectingDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithFetchRequest:(id)a0;
- (void).cxx_destruct;
- (long long)countWithContext:(id)a0 error:(id *)a1;
- (id)initWithFetchRequest:(id)a0 relationshipKeysAffectingDescriptors:(id)a1;
- (id)resultsWithContext:(id)a0 error:(id *)a1;

@end
