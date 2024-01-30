@class NSString, NSManagedObjectID;

@interface ICRDFolderListSectionIdentifier : NSObject <ICRDSectionIdentifier, NSCopying>

@property (retain, nonatomic) NSManagedObjectID *accountObjectID;
@property (nonatomic) long long sectionType;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *expansionStateContext;

+ (id)sortDescriptors;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0 prefersSystemPaperSection:(BOOL)a1;
- (long long)accountSectionTypeForModernAccount:(id)a0;
- (long long)accountSectionTypeForLegacyAccount:(id)a0;
- (BOOL)isEqualToICRDFolderListSectionIdentifier:(id)a0;
- (id)initWithSectionType:(long long)a0;

@end
