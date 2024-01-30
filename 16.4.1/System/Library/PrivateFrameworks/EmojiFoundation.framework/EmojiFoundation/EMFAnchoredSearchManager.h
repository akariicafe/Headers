@class NSArray, EMFEmojiLocaleData, EMFAnchoredSearchAnchorsLoader;

@interface EMFAnchoredSearchManager : NSObject

@property (readonly, nonatomic) EMFAnchoredSearchAnchorsLoader *anchorsLoader;
@property (readonly, nonatomic) NSArray *localizedLeftHandAnchors;
@property (readonly, nonatomic) NSArray *localizedRightHandAnchors;
@property (readonly, nonatomic) unsigned long long contextPosition;
@property (nonatomic) EMFEmojiLocaleData *localeData;

- (void).cxx_destruct;
- (void)_enumerateAnchoredReplacementCandidatesForContextLeft:(id)a0 withOptions:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)_enumerateAnchoredReplacementCandidatesForContextOmnidirectional:(id)a0 withOptions:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)_enumerateAnchoredReplacementCandidatesForContextRight:(id)a0 withOptions:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateAnchoredReplacementCandidatesForContext:(id)a0 withOptions:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)initWithLocaleData:(id)a0;

@end
