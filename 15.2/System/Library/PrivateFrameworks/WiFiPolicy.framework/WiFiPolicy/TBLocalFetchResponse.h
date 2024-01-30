@class NSArray, NSDictionary, NSSet, NSError, NSString;

@interface TBLocalFetchResponse : NSObject <TBFetchResponse>

@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSDictionary *resultsByBSSID;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSSet *tiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseWithResultsByBSSID:(id)a0;
+ (id)responseWithResults:(id)a0 entityDescription:(id)a1;

- (id)initWithResultsByBSSID:(id)a0;
- (id)initWithResults:(id)a0 entityDescription:(id)a1;
- (void).cxx_destruct;

@end
