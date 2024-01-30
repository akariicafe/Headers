@class NSArray, NSString, SAMPCollection;

@interface SAMPAddMediaItemsToUpNextQueue : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *insertLocation;
@property (retain, nonatomic) SAMPCollection *mediaCollection;
@property (copy, nonatomic) NSString *musicAccountSharedUserId;
@property (copy, nonatomic) NSString *speakerSharedUserId;

+ (id)addMediaItemsToUpNextQueueWithDictionary:(id)a0 context:(id)a1;
+ (id)addMediaItemsToUpNextQueue;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
