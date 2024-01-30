@class NSArray, NSURL, NSData;

@interface SALocalSearchSendToProtobufConduit : SADomainCommand

@property (copy, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSURL *endpoint;
@property (copy, nonatomic) NSData *rawRequest;
@property (nonatomic) long long timeoutInSeconds;

+ (id)sendToProtobufConduit;
+ (id)sendToProtobufConduitWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
