@class NSManagedObjectID;

@interface ICNoteFolderSectionIdentifier : ICNoteSectionIdentifier

@property (readonly, nonatomic) NSManagedObjectID *noteContainerObjectID;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNoteContainerObjectID:(id)a0;

@end
