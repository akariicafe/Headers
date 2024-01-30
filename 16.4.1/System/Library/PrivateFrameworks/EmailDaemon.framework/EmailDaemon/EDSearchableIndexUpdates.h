@class NSArray, NSString;

@interface EDSearchableIndexUpdates : NSObject <EFPubliclyDescribable>

@property (copy, nonatomic) NSArray *itemsRequiringIndexing;
@property (copy, nonatomic) NSArray *removedIdentifiers;
@property (copy, nonatomic) NSArray *removedDomainIdentifiers;
@property (readonly, nonatomic) BOOL hasUpdates;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updates;

- (void).cxx_destruct;

@end
