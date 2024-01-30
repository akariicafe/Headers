@class NSString, NSDictionary;

@interface AFHeadphonesAnnouncementRoute : NSObject

@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *btAddress;
@property (nonatomic) unsigned long long availableAnnouncementRequestTypes;
@property (retain, nonatomic) NSDictionary *avscRouteDescription;

- (void).cxx_destruct;

@end
