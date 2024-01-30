@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity {
    long long _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

- (BOOL)_isLocalSource;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithSource:(id)a0 type:(unsigned long long)a1;
- (BOOL)_requiresHostAndOwner;
- (BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)a0;
- (unsigned long long)isMatchForSource:(id)a0;
- (BOOL)_supportsConsistentExternalIDAcrossDevices;
- (id)initWithDictionary:(id)a0;

@end
