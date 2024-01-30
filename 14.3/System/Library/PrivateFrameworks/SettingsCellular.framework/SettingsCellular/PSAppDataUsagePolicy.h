@interface PSAppDataUsagePolicy : NSObject

@property (nonatomic) BOOL cellularDataEnabled;
@property (nonatomic) BOOL wifiDataEnabled;
@property (nonatomic) BOOL isManaged;
@property (nonatomic) BOOL modificationAllowed;

- (id)init;

@end
