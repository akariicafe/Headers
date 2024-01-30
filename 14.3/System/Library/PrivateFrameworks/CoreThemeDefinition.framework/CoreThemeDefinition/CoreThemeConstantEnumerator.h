@interface CoreThemeConstantEnumerator : NSObject {
    void *_globalListPointer;
    long long _listIndex;
    long long _indexOfLastEntry;
    BOOL _isPastLastEntry;
}

+ (id)enumeratorForGlobalListAtAddress:(void *)a0;

- (id)initWithGlobalListAtAddress:(void *)a0;
- (id)nextConstantHelper;
- (void)_moveToIndexOfLastEntry;
- (id)currentConstantHelper;
- (long long)constantCount;
- (id)previousConstantHelper;
- (id)firstConstantHelper;
- (id)lastConstantHelper;

@end
