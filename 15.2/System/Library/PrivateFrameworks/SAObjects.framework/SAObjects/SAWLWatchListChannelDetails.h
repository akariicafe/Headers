@class NSData, NSString, NSURL;

@interface SAWLWatchListChannelDetails : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *appIconDynamicImage;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSURL *appStoreURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)watchListChannelDetails;
+ (id)watchListChannelDetailsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
