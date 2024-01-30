@class NSString, NSMutableDictionary;

@interface MTIDConfig : NSObject

@property (retain, nonatomic) NSString *performanceTopic;
@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableDictionary *userIdNamespacesByTopic;
@property (retain, nonatomic) NSMutableDictionary *clientIdNamespacesByTopic;
@property (retain, nonatomic) NSString *defaultUserIdNamespace;
@property (retain, nonatomic) NSString *defaultClientIdNamespace;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)namespaceForTopic:(id)a0 idType:(long long)a1;
- (id)schemeForNamespace:(id)a0;
- (id)allKnownSchemes;
- (unsigned long long)calculateCombinedHashForNamespaces:(id)a0;

@end
