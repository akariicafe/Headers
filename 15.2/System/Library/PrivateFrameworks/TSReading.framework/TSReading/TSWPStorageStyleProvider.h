@class NSString;

@interface TSWPStorageStyleProvider : NSObject <TSWPStyleProvider>

@property (readonly, nonatomic) BOOL supportsBoldItalicUnderlineShortcuts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleProviderForStorage:(id)a0;

- (id)paragraphStyleAtParIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;

@end
