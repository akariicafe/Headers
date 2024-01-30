@class NSArray, NSSet, NSMutableSet, NSError, NSDictionary, NSString;

@interface TBMutableTileFetchResponse : NSObject <TBFetchResponse>

@property (retain, nonatomic) NSMutableSet *mutableTiles;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSSet *tiles;
@property (readonly, nonatomic) NSDictionary *resultsByBSSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addResponse:(id)a0;
- (void).cxx_destruct;

@end
