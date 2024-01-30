@class NSString, NSDictionary, NSError, NSNumber, NSDate;

@interface TBFetchAnalyticsEvent : NSObject <TBAnalyticsEvent>

@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long trigger;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *requestCount;
@property (retain, nonatomic) NSNumber *resultCount;
@property (retain, nonatomic) NSString *tileKey;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchEventWithSource:(unsigned long long)a0 type:(unsigned long long)a1 trigger:(unsigned long long)a2 duration:(id)a3 requestCount:(id)a4 resultCount:(id)a5 error:(id)a6 tileKey:(id)a7;

- (void).cxx_destruct;

@end
