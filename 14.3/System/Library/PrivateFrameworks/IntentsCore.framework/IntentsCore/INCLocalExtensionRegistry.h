@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject {
    NSMutableDictionary *_localExtensionsByIdentifier;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerLocalExtension:(id)a0;
- (void)deregisterLocalExtension:(id)a0;
- (id)localExtensions;
- (id)localExtensionForIdentifier:(id)a0;

@end
