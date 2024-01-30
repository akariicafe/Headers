@class NSArray;

@interface NewsUI2.TodayBridgedConfig : NSObject <FCForYouBridgedConfiguration> {
    void /* unknown type, empty encoding */ todayConfig;
    void /* unknown type, empty encoding */ groupConfigs;
}

@property (nonatomic, readonly) NSArray *groupConfigs;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;

@end
