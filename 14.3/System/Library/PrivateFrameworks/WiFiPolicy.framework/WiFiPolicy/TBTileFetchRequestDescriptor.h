@class NSSet, TBLocalFetchRequestDescriptor, NSPredicate, NSDate, PBCodable, NSString;

@interface TBTileFetchRequestDescriptor : NSObject <TBFetchRequestDescriptor, NSCopying>

@property (retain, nonatomic) NSSet *tileItems;
@property (retain, nonatomic) NSPredicate *localFetchPredicate;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *localFetchDescriptor;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor;
@property (retain, nonatomic) NSDate *maxCacheAge;
@property (readonly, nonatomic) PBCodable *remoteRequest;
@property (readonly, nonatomic) Class remoteRequestClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_preferLocalCacheFetchRequest;
- (id)initWithTileItems:(id)a0 maxCacheAge:(id)a1;
- (id)initWithTileItems:(id)a0;

@end
