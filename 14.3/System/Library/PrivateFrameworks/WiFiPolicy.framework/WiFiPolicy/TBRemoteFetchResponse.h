@class NSArray, NSSet, NSDictionary, NSError, NSString;

@interface TBRemoteFetchResponse : NSObject <TBFetchResponse>

@property (retain, nonatomic) NSArray *results;
@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSSet *tiles;
@property (readonly, nonatomic) NSDictionary *resultsByBSSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseWithResults:(id)a0 tiles:(id)a1 error:(id)a2;

- (void).cxx_destruct;
- (id)initWithResults:(id)a0 tiles:(id)a1 error:(id)a2;

@end
