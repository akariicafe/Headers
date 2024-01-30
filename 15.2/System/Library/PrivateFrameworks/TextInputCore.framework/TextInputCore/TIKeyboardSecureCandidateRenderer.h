@class CAContext, NSMutableDictionary, NSString;

@interface TIKeyboardSecureCandidateRenderer : NSObject {
    NSMutableDictionary *_accessibilityLabelCache;
}

@property (retain, nonatomic) NSMutableDictionary *secureCandidateCache;
@property (readonly, nonatomic) CAContext *context;
@property (retain, nonatomic) NSString *localeIdentifier;

+ (id)allRenderers;

- (struct __CFArray { } *)imagesFromSecureCandidates:(id)a0 withRenderTraits:(id)a1 outAccessibilityLabels:(id *)a2;
- (id)localizedStringForKey:(id)a0;
- (id)updateCachedCandidate:(id)a0 withCandidateString:(id)a1;
- (id)localizedApplicationNameWithBundleIdentifier:(id)a0;
- (void)cacheAccessibilityLabel:(id)a0 forSlotID:(unsigned int)a1;
- (id)accessibilityLabelForSlotID:(unsigned int)a0;
- (id)cachedPayloadForSecureCandidateSlotID:(unsigned int)a0;
- (id)initForLocalizedStrings;
- (id)slotIDsFromSecureCandidates:(id)a0 withRenderTraits:(id)a1;
- (void)clearSecureCandidateCache;
- (id)_truncationSentinel;
- (struct CGImage { } *)imageForSendCurrentLocationWithRenderTraits:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (struct __CFArray { } *)arrayOfContexts:(unsigned long long)a0 withRenderTraits:(id)a1;
- (id)accessibilityLabelsForSecureHeaders:(id)a0 secureContents:(id)a1 truncationSentinel:(id)a2;
- (void)dealloc;
- (id)cachedCandidateForSecureCandidate:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (struct __CFArray { } *)imagesFromContexts:(struct __CFArray { } *)a0;
- (unsigned int)slotIDForSendCurrentLocationWithRenderTraits:(id)a0;

@end
