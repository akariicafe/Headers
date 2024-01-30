@class NSArray, NSString, TSTTableInfo;
@protocol TSKAnnotation;

@interface TSTSearchReference : NSObject <TSKSearchReference> {
    TSTTableInfo *_tableInfo;
    struct { unsigned short row; unsigned char column; unsigned char reserved; } _cellID;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

@property (nonatomic) struct CGPoint { double x; double y; } searchReferencePoint;
@property (retain, nonatomic) NSArray *findHighlights;
@property (nonatomic) BOOL pulseHighlight;
@property (nonatomic) BOOL autohideHighlight;
@property (retain, nonatomic) id<TSKAnnotation> annotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchReferenceWithTableInfo:(id)a0 cellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)model;
- (id)selection;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct { unsigned short x0; unsigned char x1; unsigned char x2; })cellID;
- (void)setCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a0;
- (BOOL)isEqual:(id)a0;
- (id)commandForReplacingWithString:(id)a0 options:(unsigned long long)a1;
- (id)searchReferenceForReplacingWithString:(id)a0 options:(unsigned long long)a1 authorCreatedWithCommand:(id *)a2;
- (id)searchReferenceStart;
- (id)searchReferenceEnd;
- (BOOL)isReplaceable;
- (id)tableInfo;
- (id)initWithTableInfo:(id)a0 cellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
