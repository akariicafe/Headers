@class NSString, NSMutableDictionary;

@interface MTIDConfig : NSObject

@property (retain, nonatomic) NSString *performanceTopic;
@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableDictionary *userIdNamespacesByTopic;
@property (retain, nonatomic) NSMutableDictionary *clientIdNamespacesByTopic;
@property (retain, nonatomic) NSString *defaultUserIdNamespace;
@property (retain, nonatomic) NSString *defaultClientIdNamespace;

- (id)schemeForNamespace:(id)a0;
- (id)allKnownSchemes;
- (id)namespaceForTopic:(id)a0 idType:(long long)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)calculateCombinedHashForNamespaces:(id)a0;
- (id)dictionaryRepresentation;

@end
