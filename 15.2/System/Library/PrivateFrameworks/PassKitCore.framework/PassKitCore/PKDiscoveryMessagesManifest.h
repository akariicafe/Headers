@class NSArray;

@interface PKDiscoveryMessagesManifest : NSObject

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSArray *engagementMessages;
@property (readonly, nonatomic) NSArray *notifications;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
