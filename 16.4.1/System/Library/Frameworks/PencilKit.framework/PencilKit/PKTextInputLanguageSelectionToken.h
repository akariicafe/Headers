@protocol PKTextInputLanguageSelectionTokenStore;

@interface PKTextInputLanguageSelectionToken : NSObject <NSCopying> {
    id<PKTextInputLanguageSelectionTokenStore> _store;
}

+ (id)tokenWithStore:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
