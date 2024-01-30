@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity {
    long long _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

- (id)dictionary;
- (BOOL)_requiresHostAndOwner;
- (BOOL)_isLocalSource;
- (BOOL)_supportsConsistentExternalIDAcrossDevices;
- (id)initWithSource:(id)a0 type:(unsigned long long)a1;
- (BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)isMatchForSource:(id)a0;
- (void).cxx_destruct;

@end
