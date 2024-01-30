@class NSString;

@interface WKFoundTextRange : UITextRange

@property (nonatomic) unsigned long long location;
@property (nonatomic) unsigned long long length;
@property (copy, nonatomic) NSString *frameIdentifier;
@property (nonatomic) unsigned long long order;

+ (id)foundTextRangeWithWebFoundTextRange:(struct WebFoundTextRange { unsigned long long x0; unsigned long long x1; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; } x2; unsigned long long x3; })a0;

- (BOOL)isEmpty;
- (id)end;
- (void)dealloc;
- (id)start;
- (struct WebFoundTextRange { unsigned long long x0; unsigned long long x1; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; } x2; unsigned long long x3; })webFoundTextRange;

@end
