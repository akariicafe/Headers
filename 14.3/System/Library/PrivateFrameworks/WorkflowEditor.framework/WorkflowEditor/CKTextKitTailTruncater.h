@class NSString, CKTextKitContext, NSAttributedString, NSCharacterSet;

@interface CKTextKitTailTruncater : NSObject <CKTextKitTruncating> {
    CKTextKitContext *_context;
    NSAttributedString *_truncationAttributedString;
    NSCharacterSet *_avoidTailTruncationSet;
    struct CGSize { double width; double height; } _constrainedSize;
}

@property (readonly, nonatomic) struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange *__value_; } __end_cap_; } visibleRanges;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } truncationStringRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithContext:(id)a0 truncationAttributedString:(id)a1 avoidTailTruncationSet:(id)a2 constrainedSize:(struct CGSize { double x0; double x1; })a3;
- (unsigned long long)_calculateCharacterIndexBeforeTruncationMessage:(id)a0 textStorage:(id)a1 textContainer:(id)a2;
- (unsigned long long)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(unsigned long long)a0 layoutManager:(id)a1 textStorage:(id)a2;
- (void)_truncate;

@end
