@class NSArray, NSMutableArray;
@protocol NSTextStorageObserving, NSTextStorageObservingPrivate, NSTextStorageDelegate;

@interface NSTextStorage : NSMutableAttributedString <NSSecureCoding> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _editedRange;
    long long _editedDelta;
    struct { unsigned char editedMask : 8; unsigned char postWillProcess : 1; unsigned char postDidProcess : 1; unsigned char  : 6; unsigned short disabled : 16; } _flags;
    NSMutableArray *_layoutManagers;
    id _sideData;
    long long _fontFixingDisabledCount;
    id<NSTextStorageObservingPrivate> _textStorageObserver;
    BOOL _shouldSetOriginalFontAttribute;
    Class _intentResolver;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL ensuresFixingAttributes;
@property BOOL ensuresFixingFontAttributes;
@property (readonly, copy, nonatomic) NSArray *layoutManagers;
@property (readonly, nonatomic) unsigned long long editedMask;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } editedRange;
@property (readonly, nonatomic) long long changeInLength;
@property (weak, nonatomic) id<NSTextStorageDelegate> delegate;
@property (readonly, nonatomic) BOOL fixesAttributesLazily;
@property (weak, nonatomic) id<NSTextStorageObserving> textStorageObserver;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)cuiCatalog;
- (void)fontSetChanged;
- (BOOL)_forceFixAttributes;
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)a0;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)_setAttributeFixingInProgress:(BOOL)a0;
- (void)endEditing;
- (void)processEditing;
- (void)encodeWithCoder:(id)a0;
- (void)_setForceFixAttributes:(BOOL)a0;
- (void)_unlock;
- (void)removeLayoutManager:(id)a0;
- (Class)_intentResolver;
- (void)finalize;
- (BOOL)_isEditing;
- (BOOL)_lockForWriting;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_lockForReading;
- (BOOL)_usesSimpleTextEffects;
- (BOOL)_attributeFixingInProgress;
- (void)_setShouldSetOriginalFontAttribute:(BOOL)a0;
- (void)invalidateAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_notifyEdited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2 invalidatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)_setEditedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeByEstimatingAttributeFixingForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setEditedMask:(unsigned long long)a0;
- (BOOL)_shouldFixFontAttributes;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setTextStorageController:(id)a0;
- (id)textStorageController;
- (void)beginEditing;
- (id)init;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)cuiStyleEffects;
- (void)_setIntentResolver:(Class)a0;
- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (void)dealloc;
- (void)addLayoutManager:(id)a0;
- (void)coordinateAccess:(id /* block */)a0;
- (void)coordinateEditing:(id /* block */)a0;
- (void)coordinateReading:(id /* block */)a0;
- (void)_setUsesSimpleTextEffects:(BOOL)a0;

@end
