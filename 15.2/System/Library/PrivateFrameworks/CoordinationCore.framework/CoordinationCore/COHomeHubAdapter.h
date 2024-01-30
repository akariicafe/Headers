@class NSObject;

@interface COHomeHubAdapter : NSObject

@property (readonly, nonatomic) NSObject *client;
@property (readonly, nonatomic) NSObject *list;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)accessoryForPeerInstance:(id)a0 usingHomeKitAdapter:(id)a1;
- (id)accessoryIdentifierForPeerInstance:(id)a0 usingHomeKitAdapter:(id)a1;

@end
