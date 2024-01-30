@class NSDictionary;

@interface DBHomeKitServiceTypes : NSObject

@property (class, readonly, nonatomic) NSDictionary *serviceTypeByName;
@property (class, readonly, nonatomic) NSDictionary *serviceNameByType;

+ (id)serviceNameForType:(id)a0;

@end
