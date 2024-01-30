@class NSString, NSArray, NSUUID;

@interface WFScanRequest : NSObject

@property (copy, nonatomic) NSString *ssid;
@property (retain, nonatomic) NSArray *channels;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic) BOOL channelListIncludesTwoFour;
@property (retain, nonatomic) NSUUID *UUID;
@property BOOL applyRssiThresholdFilter;
@property unsigned long long dwellTime;
@property BOOL includeBSSList;
@property BOOL lowPriorityScan;

+ (id)scanRequestForChannels:(id)a0;
+ (id)scanRequestForSSID:(id)a0 channels:(id)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)cScanParameters;
- (id)_channelListFromArrayOfChannels:(id)a0;
- (BOOL)_channelListIncludesTwoFour:(id)a0;
- (id)_defaultScanDictionary;
- (id)initWithSSID:(id)a0 channels:(id)a1;
- (id)scanParameters;

@end
