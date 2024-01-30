@class NSConcreteNotifyingMutableAttributedString;

@interface NSConcreteTextStorage : NSTextStorage {
    NSConcreteNotifyingMutableAttributedString *_contents;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
    struct { unsigned char _forceFixAttributes : 1; unsigned char _needLock : 1; unsigned char _lockInitialized : 1; unsigned char _inFixingAttributes : 1; unsigned int _reserved : 28; } _pFlags;
}

+ (unsigned long long)_writerCountTSDKey;

- (void)_setForceFixAttributes:(BOOL)a0;
- (BOOL)fixesAttributesLazily;
- (BOOL)_lockForReading;
- (void)_unlock;
- (BOOL)_attributeFixingInProgress;
- (void)_initLocks;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)_setAttributeFixingInProgress:(BOOL)a0;
- (void)addAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (unsigned long long)length;
- (BOOL)_forceFixAttributes;
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)a0;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)removeAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)init;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithAttributedString:(id)a0;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)string;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (Class)classForCoder;

@end
