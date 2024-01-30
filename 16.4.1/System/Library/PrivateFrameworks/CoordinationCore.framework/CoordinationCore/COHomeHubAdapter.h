@class NSObject;

@interface COHomeHubAdapter : NSObject

@property (readonly, nonatomic) NSObject *client;
@property (readonly, nonatomic) NSObject *list;

+ (id)sharedInstance;

- (id)accessoryForPeerInstance:(id)a0 usingHomeKitAdapter:(id)a1;
- (id)accessoryIdentifierForPeerInstance:(id)a0 usingHomeKitAdapter:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
