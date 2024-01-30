@class NSString;

@interface CDPLocalizedStringBuilder : NSObject {
    NSString *_key;
}

+ (id)builderForKey:(id)a0;

- (id)localizedString;
- (id)currentKey;
- (void).cxx_destruct;
- (id)addSecretType:(unsigned long long)a0;
- (id)addDeviceClass:(id)a0;
- (id)addUnqualifiedDeviceClass:(id)a0;

@end
