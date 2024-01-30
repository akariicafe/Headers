@class NSDate;

@interface PARSafariPropensity : NSManagedObject <NSFetchRequestResult>

@property (nonatomic) short goToSite;
@property (nonatomic) short localGoto;
@property (nonatomic) short localTap;
@property (nonatomic) short other;
@property (nonatomic) short parsecAppStore;
@property (nonatomic) short parsecGoto;
@property (nonatomic) short parsecMaps;
@property (nonatomic) short parsecNews;
@property (nonatomic) short parsecOther;
@property (nonatomic) short parsecStocks;
@property (nonatomic) short parsecTap;
@property (nonatomic) short parsecWeather;
@property (nonatomic) short parsecWeb;
@property (nonatomic) short parsecWiki;
@property (nonatomic) short thirdPartyCompletionOrRecentSearch;
@property (nonatomic) short thirdPartyGoto;
@property (nonatomic) short thirdPartyTap;
@property (nonatomic, copy) NSDate *timestamp;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;
- (void).cxx_construct;

@end
