@class TITransientLexiconManager, NLTagger, NSString, NSLocale, NSObject;
@protocol OS_dispatch_queue;

@interface TISmartSelector : NSObject {
    struct unique_ptr<KB::StaticDictionary, std::default_delete<KB::StaticDictionary>> { struct __compressed_pair<KB::StaticDictionary *, std::default_delete<KB::StaticDictionary>> { struct StaticDictionary *__value_; } __ptr_; } _staticDictionary;
    struct _LXLexicon { } *_contactDictionary;
    id /* block */ _contactObserver;
}

@property unsigned long long options;
@property (retain) NSLocale *locale;
@property (retain) TITransientLexiconManager *transientLexiconManager;
@property (retain) NLTagger *namedEntityTagger;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy) id /* block */ dataChangedHandler;
@property (retain) NSString *language;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })longestRangeEncapsulatingSubstringInDocument:(id)a0 containingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenizedRanges:(id)a2 meetingCondition:(id /* block */)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRangeForTextInDocument:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 options:(unsigned long long)a3;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRangeForTextInDocument:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 tokenizedRanges:(id)a3 options:(unsigned long long)a4;
- (void)dealloc;
- (id).cxx_construct;
- (void)loadStaticPhraseDictionary;
- (id)initWithOptions:(unsigned long long)a0 language:(id)a1 dataChangedHandler:(id /* block */)a2;

@end
