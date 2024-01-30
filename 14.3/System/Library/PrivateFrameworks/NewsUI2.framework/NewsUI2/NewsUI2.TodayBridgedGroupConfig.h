@class NSString;

@interface NewsUI2.TodayBridgedGroupConfig : NSObject <FCForYouBridgedFeedGroupConfig> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ channelID;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ bridgedGroupType;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) NSString *backingTagID;

- (id)init;
- (void).cxx_destruct;

@end
