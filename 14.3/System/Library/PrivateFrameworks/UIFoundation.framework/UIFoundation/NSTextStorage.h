@class NSArray, NSMutableArray;
@protocol NSTextStorageControllerPrivate, NSTextStorageDelegate;

@interface NSTextStorage : NSMutableAttributedString <NSSecureCoding> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _editedRange;
    long long _editedDelta;
    struct { unsigned char editedMask : 8; unsigned char postWillProcess : 1; unsigned char postDidProcess : 1; unsigned char  : 6; unsigned short disabled : 16; } _flags;
    NSMutableArray *_layoutManagers;
    id _sideData;
    id<NSTextStorageControllerPrivate> _textStorageController;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL ensuresFixingAttributes;
@property (readonly, copy, nonatomic) NSArray *layoutManagers;
@property (readonly, nonatomic) unsigned long long editedMask;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } editedRange;
@property (readonly, nonatomic) long long changeInLength;
@property (weak, nonatomic) id<NSTextStorageDelegate> delegate;
@property (readonly, nonatomic) BOOL fixesAttributesLazily;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (void)_setForceFixAttributes:(BOOL)a0;
- (BOOL)_lockForReading;
- (void)_unlock;
- (BOOL)_attributeFixingInProgress;
- (void)_setAttributeFixingInProgress:(BOOL)a0;
- (BOOL)_forceFixAttributes;
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)a0;
- (id)init;
- (void)processEditing;
- (void)removeLayoutManager:(id)a0;
- (BOOL)_lockForWriting;
- (BOOL)_usesSimpleTextEffects;
- (void)dealloc;
- (void)setTextStorageController:(id)a0;
- (void)invalidateAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_notifyEdited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2 invalidatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)_setEditedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_shouldSetOriginalFontAttribute;
- (id)textStorageController;
- (void)setEditedMask:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeByEstimatingAttributeFixingForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)fontSetChanged;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEditing;
- (void)coordinateReading:(id /* block */)a0;
- (void)coordinateEditing:(id /* block */)a0;
- (id)cuiCatalog;
- (void)addLayoutManager:(id)a0;
- (void)_setUsesSimpleTextEffects:(BOOL)a0;
- (void)endEditing;
- (void)finalize;
- (void)coordinateAccess:(id /* block */)a0;
- (id)cuiStyleEffects;
- (Class)classForCoder;
- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (void)beginEditing;
- (void)encodeWithCoder:(id)a0;

@end
