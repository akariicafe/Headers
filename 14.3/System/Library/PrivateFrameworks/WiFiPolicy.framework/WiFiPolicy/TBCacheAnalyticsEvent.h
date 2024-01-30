@class NSNumber, NSString, NSDictionary;

@interface TBCacheAnalyticsEvent : NSObject <TBAnalyticsEvent>

@property (nonatomic) unsigned long long status;
@property (nonatomic) NSNumber *staleness;
@property (nonatomic) NSNumber *tileKey;
@property (nonatomic) NSNumber *type;
@property (nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheAvailabilityEventWithStatus:(unsigned long long)a0;
+ (id)cacheAnalyticsEventWithStatus:(unsigned long long)a0 staleness:(unsigned long long)a1 tileKey:(unsigned long long)a2 type:(unsigned long long)a3 error:(id)a4;
+ (id)cacheEventWithTotalCount:(unsigned long long)a0 last24HoursCount:(unsigned long long)a1;

- (void).cxx_destruct;

@end
