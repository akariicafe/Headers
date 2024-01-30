@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject {
    NSMutableDictionary *_localExtensionsByIdentifier;
}

+ (id)sharedInstance;

- (id)localExtensions;
- (void)deregisterLocalExtension:(id)a0;
- (id)init;
- (void)registerLocalExtension:(id)a0;
- (void).cxx_destruct;
- (id)localExtensionForIdentifier:(id)a0;

@end
