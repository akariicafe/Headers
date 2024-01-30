@class NSString, NSDictionary, NTPBTopStoriesConfig;

@interface FCTopStoriesConfiguration : NSObject <NSCopying> {
    NTPBTopStoriesConfig *_pbConfig;
    NSDictionary *_configDict;
}

@property (readonly, nonatomic, getter=isPromotingEnabled) BOOL promotingEnabled;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSDictionary *styleConfigurations;
@property (readonly, nonatomic) long long storyTypeTimeout;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPBTopStoriesConfig:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
