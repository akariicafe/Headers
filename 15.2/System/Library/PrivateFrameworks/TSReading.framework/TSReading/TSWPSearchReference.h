@class TSWPSmartField, TSWPSelection, NSArray, NSString, TSWPStorage;
@protocol TSKAnnotation;

@interface TSWPSearchReference : NSObject <TSKSearchReference> {
    TSWPStorage *_storage;
    struct _NSRange { unsigned long long location; unsigned long long length; } _smartFieldRange;
    BOOL _refersToSmartField;
    TSWPSmartField *_smartField;
}

@property (retain, nonatomic) TSWPSelection *selection;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic) BOOL refersToSmartField;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } smartFieldRange;
@property (retain, nonatomic) TSWPSmartField *smartField;
@property (readonly, nonatomic) BOOL isInsertionPoint;
@property (nonatomic) struct CGPoint { double x; double y; } searchReferencePoint;
@property (retain, nonatomic) NSArray *findHighlights;
@property (nonatomic) BOOL pulseHighlight;
@property (nonatomic) BOOL autohideHighlight;
@property (retain, nonatomic) id<TSKAnnotation> annotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchReferenceWithStorage:(id)a0 selection:(id)a1;
+ (id)searchReferenceWithStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (BOOL)isSelectable;
- (long long)compare:(id)a0;
- (id)storage;
- (id)model;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)commandForReplacingWithString:(id)a0 options:(unsigned long long)a1;
- (id)searchReferenceForReplacingWithString:(id)a0 options:(unsigned long long)a1 authorCreatedWithCommand:(id *)a2;
- (id)searchReferenceStart;
- (id)searchReferenceEnd;
- (BOOL)isReplaceable;
- (id)initWithStorage:(id)a0 selection:(id)a1;
- (void)pUpdateSelection;

@end
