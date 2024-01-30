@class NSMutableDictionary, NSMutableSet;

@interface WebElementDictionary : NSDictionary {
    void *_result;
    NSMutableDictionary *_cache;
    NSMutableSet *_nilValues;
    BOOL _cacheComplete;
}

+ (void)initialize;
+ (void)initializeLookupTable;

- (id)_title;
- (id)_isSelected;
- (id)_textContent;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (void)dealloc;
- (id)_domNode;
- (id)initWithHitTestResult:(const void *)a0;
- (id)_webFrame;
- (id)_altDisplayString;
- (id)_absoluteImageURL;
- (id)_absoluteMediaURL;
- (id)_spellingToolTip;
- (id)_absoluteLinkURL;
- (id)_targetWebFrame;
- (id)_titleDisplayString;
- (id)_isLiveLink;
- (id)_isContentEditable;
- (id)_isInScrollBar;
- (void)_fillCache;

@end
