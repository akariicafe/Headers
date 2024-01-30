@class NSString, NSManagedObjectID;

@interface ICRDAccountSectionIdentifier : NSObject <ICRDSectionIdentifier, NSCopying>

@property (retain, nonatomic) NSManagedObjectID *accountObjectID;
@property (nonatomic) long long sectionType;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *expansionStateContext;

+ (id)sortDescriptors;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)accountSectionTypeForModernAccount:(id)a0;
- (long long)accountSectionTypeForLegacyAccount:(id)a0;
- (BOOL)isEqualToICRDAccountSectionIdentifier:(id)a0;
- (id)initWithSectionType:(long long)a0 accountObjectID:(id)a1;

@end
