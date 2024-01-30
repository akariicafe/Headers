@class NSArray, NSString;

@interface SANPGetNowPlayingQueueDetailsResponse : SABaseCommand <SAServerBoundCommand, SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *nextItems;
@property (copy, nonatomic) NSArray *previousItems;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getNowPlayingQueueDetailsResponse;
+ (id)getNowPlayingQueueDetailsResponseWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
