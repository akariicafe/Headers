@class NSSet, TBLocalFetchRequestDescriptor, NSPredicate, NSDate, PBCodable, NSString;

@interface TBLocationFetchRequestDescriptor : NSObject <TBFetchRequestDescriptor, NSCopying>

@property (retain, nonatomic) NSPredicate *localFetchPredicate;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSSet *tileItems;
@property (nonatomic) unsigned long long primaryTileKey;
@property (retain, nonatomic) NSDate *maxCacheAge;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *localFetchDescriptor;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor;
@property (readonly, nonatomic) PBCodable *remoteRequest;
@property (readonly, nonatomic) Class remoteRequestClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 radius:(double)a2 maxCacheAge:(id)a3;
- (id)_localFetchRequest;
- (id)_preferLocalCacheFetchRequest;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 maxCacheAge:(id)a2;

@end
