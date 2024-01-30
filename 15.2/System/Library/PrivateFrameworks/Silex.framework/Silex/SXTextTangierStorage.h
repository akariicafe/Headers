@class NSSet, NSLocale, NSMutableArray, NSCache;

@interface SXTextTangierStorage : TSWPStorage

@property (retain, nonatomic) NSMutableArray *attachments;
@property (retain, nonatomic) NSCache *tokenizersCache;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } unfairLock;
@property (readonly, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL isSelectable;
@property (nonatomic) BOOL shouldHyphenate;
@property (retain, nonatomic) NSSet *rangedExclusionPaths;

- (void).cxx_destruct;
- (BOOL)supportsSections;
- (void)dealloc;
- (id)initWithContext:(id)a0 stylesheet:(id)a1 storageKind:(int)a2 string:(id)a3 locale:(id)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })insertAttachmentOrFootnote:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })wordAtCharIndex:(unsigned long long)a0 includePreviousWord:(BOOL)a1;

@end
