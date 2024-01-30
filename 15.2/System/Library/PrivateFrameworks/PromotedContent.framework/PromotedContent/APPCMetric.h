@class NSString, NSDictionary, NSDate;

@interface APPCMetric : NSObject <APPCMetricable> {
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ contentId;
    void /* unknown type, empty encoding */ clientBundleIdentifier;
    void /* unknown type, empty encoding */ deviceIdentifier;
    void /* unknown type, empty encoding */ userIdentifier;
    void /* unknown type, empty encoding */ properties;
}

@property (nonatomic) void /* unknown type, empty encoding */ route;
@property (nonatomic) void /* unknown type, empty encoding */ metric;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSString *contentId;
@property (nonatomic, copy) NSString *clientBundleIdentifier;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) NSDictionary *properties;

- (void).cxx_destruct;
- (id)init;

@end
