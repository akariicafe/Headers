@class NSManagedObjectContext;

@interface ICRDSectionController : _UIDiffableDataSourceOutlineSectionController

@property (readonly, nonatomic) NSManagedObjectContext *legacyViewContext;
@property (readonly, nonatomic) NSManagedObjectContext *modernViewContext;
@property (readonly, nonatomic) unsigned long long sectionControllerType;

- (void).cxx_destruct;
- (id)initWithDiffableDataSource:(id)a0 sectionControllerType:(unsigned long long)a1;

@end
