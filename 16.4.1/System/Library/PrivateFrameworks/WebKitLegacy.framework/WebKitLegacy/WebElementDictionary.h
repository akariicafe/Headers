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
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void)dealloc;
- (id)_isSelected;
- (id)_textContent;
- (id)_targetWebFrame;
- (id)_absoluteLinkURL;
- (id)_altDisplayString;
- (id)_domNode;
- (id)_absoluteImageURL;
- (id)_absoluteMediaURL;
- (void)_fillCache;
- (id)_isContentEditable;
- (id)_isInScrollBar;
- (id)_isLiveLink;
- (id)_spellingToolTip;
- (id)_titleDisplayString;
- (id)_webFrame;
- (id)initWithHitTestResult:(const void *)a0;

@end
