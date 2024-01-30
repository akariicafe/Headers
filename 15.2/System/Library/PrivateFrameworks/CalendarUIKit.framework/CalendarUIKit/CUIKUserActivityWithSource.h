@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity {
    long long _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionary;
- (BOOL)_requiresHostAndOwner;
- (BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)a0;
- (id)initWithSource:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)isMatchForSource:(id)a0;
- (BOOL)_supportsConsistentExternalIDAcrossDevices;
- (BOOL)_isLocalSource;

@end
