@class NSString;

@interface FCEndpointConfiguration : NSObject

@property (readonly, nonatomic) NSString *clientAPIBaseURLString;
@property (readonly, nonatomic) NSString *notificationsBaseURLString;
@property (readonly, nonatomic) NSString *staticAssetBaseURLString;
@property (readonly, nonatomic) NSString *remoteDataSourceBaseURLString;
@property (readonly, nonatomic) NSString *newsletterAPIBaseURLString;
@property (readonly, nonatomic) NSString *appAnalyticsBaseURLString;
@property (readonly, nonatomic) NSString *fairPlayBaseURLString;
@property (readonly, nonatomic) NSString *searchAPIBaseURLString;
@property (readonly, nonatomic) NSString *appAnalyticsNotificationReceiptBaseURLString;

- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5 fairPlayBaseURLString:(id)a6 searchAPIBaseURLString:(id)a7 appAnalyticsNotificationReceiptBaseURLString:(id)a8;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5 fairPlayBaseURLString:(id)a6;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5 fairPlayBaseURLString:(id)a6 searchAPIBaseURLString:(id)a7;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1;
- (unsigned long long)hash;

@end
