@class NSString;

@interface APSRadarComponentEntry : NSObject

@property (readonly, nonatomic) NSString *componentName;
@property (readonly, nonatomic) NSString *componentVersion;
@property (readonly, nonatomic) NSString *componentID;

+ (id)componentEntryWithName:(id)a0 componentVersion:(id)a1 componentID:(id)a2;

@end
