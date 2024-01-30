@class NSString;

@interface WAAppData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) NSString *appBuildNumber;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithAppVersion:(id)a0 appBuildNumber:(id)a1;

@end
