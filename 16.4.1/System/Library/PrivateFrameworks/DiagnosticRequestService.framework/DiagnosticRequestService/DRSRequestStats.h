@class NSArray, NSMutableDictionary, NSString, NSDictionary, NSMutableArray;

@interface DRSRequestStats : NSObject

@property (readonly, nonatomic) NSMutableArray *_requests;
@property (readonly, nonatomic) NSMutableDictionary *_childStats;
@property (readonly, nonatomic) NSArray *requests;
@property (readonly, nonatomic) unsigned long long requestCount;
@property (readonly, nonatomic) unsigned long long logSizeBytes;
@property (readonly, nonatomic) NSString *descriptionString;
@property (readonly, nonatomic) NSDictionary *childStats;

+ (id)keyName;
+ (Class)childStatsClass;
+ (id)descriptionStringForChildStats:(id)a0;
+ (id)descriptionStringForRequest:(id)a0;

- (BOOL)addRequest:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)_debugDescription:(unsigned long long)a0;
- (void)_addChildRequest:(id)a0;
- (id)initWithDescriptionString:(id)a0;

@end
