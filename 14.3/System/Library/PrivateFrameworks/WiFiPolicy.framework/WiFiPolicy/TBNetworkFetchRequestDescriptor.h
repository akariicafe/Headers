@class NSSet, TBLocalFetchRequestDescriptor, NSPredicate, GEOWiFiQualityNetworkSearch, NSDate, NSString;

@interface TBNetworkFetchRequestDescriptor : NSObject <TBFetchRequestDescriptor, NSCopying>

@property (retain, nonatomic) GEOWiFiQualityNetworkSearch *remoteRequest;
@property (retain, nonatomic) NSPredicate *localFetchPredicate;
@property (retain, nonatomic) NSSet *bssids;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *maxCacheAge;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *localFetchDescriptor;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor;
@property (readonly, nonatomic) Class remoteRequestClass;
@property (readonly, nonatomic) NSSet *tileItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
