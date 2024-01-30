@class NSURL, NSString, SAWLWatchListChannelDetails;

@interface SAWLWatchListPlayable : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAWLWatchListChannelDetails *channelDetails;
@property (nonatomic) BOOL entitled;
@property (nonatomic) BOOL installed;
@property (copy, nonatomic) NSURL *playURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)watchListPlayable;
+ (id)watchListPlayableWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
