@class NSString;

@interface AMSMetricsIdentifierKey : NSObject

@property (nonatomic) BOOL crossDeviceSync;
@property (retain, nonatomic) NSString *name;

+ (id)keyWithName:(id)a0 crossDeviceSync:(BOOL)a1;

- (void).cxx_destruct;

@end
