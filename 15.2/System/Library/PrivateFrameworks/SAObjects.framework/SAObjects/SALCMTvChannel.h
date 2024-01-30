@class NSString, NSURL;

@interface SALCMTvChannel : SADomainObject

@property (copy, nonatomic) NSString *callSign;
@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *streamUrl;

+ (id)tvChannel;
+ (id)tvChannelWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
