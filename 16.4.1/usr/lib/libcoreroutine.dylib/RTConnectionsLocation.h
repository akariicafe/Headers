@class NSString, RTLocation, NSURL, NSDate;

@interface RTConnectionsLocation : NSObject

@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *originatingBundleID;
@property (readonly, nonatomic) NSString *fullFormattedAddress;
@property (readonly, nonatomic) NSURL *mapItemURL;
@property (readonly, nonatomic) NSDate *createdAt;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_addProactiveExpertSourceTo:(id)a0;
- (id)_mapItemFromForwardGeocode:(id)a0 options:(id)a1;
- (id)_mapItemFromLocalSearch:(id)a0 options:(id)a1;
- (id)initWithLocation:(id)a0 name:(id)a1 originatingBundleID:(id)a2 fullFormattedAddress:(id)a3 mapItemURL:(id)a4 createdAt:(id)a5;
- (id)mapItemUsingMapServiceManager:(id)a0 options:(id)a1;

@end
