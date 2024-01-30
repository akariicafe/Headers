@class NSNumber, TSTLayout, NSString;

@interface TSTLayoutHint : NSObject <TSDHint, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isValid;
@property (nonatomic) struct { struct { unsigned short row; unsigned char column; unsigned char reserved; } origin; struct { unsigned short numberOfColumns; unsigned short numberOfRows; } size; } cellRange;
@property (nonatomic) struct { unsigned short row; unsigned char column; unsigned char reserved; } cacheHintID;
@property (retain, nonatomic) NSNumber *partitioningPass;
@property (nonatomic) unsigned int partitionPosition;
@property (nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (nonatomic) struct CGSize { double width; double height; } effectiveSize;
@property (nonatomic) TSTLayout *layout;
@property (nonatomic) BOOL horizontal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)archivedHintClass;

- (void)encodeWithCoder:(id)a0;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)copyForArchiving;
- (id)firstChildHint;
- (id)initWithRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0 hintId:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1 partitionPosition:(unsigned int)a2 maximumSize:(struct CGSize { double x0; double x1; })a3 effectiveSize:(struct CGSize { double x0; double x1; })a4 layout:(id)a5 validity:(BOOL)a6 horizontal:(BOOL)a7;
- (BOOL)isFirstHint;
- (id)lastChildHint;
- (void)offsetByDelta:(int)a0;
- (BOOL)overlapsWithSelection:(id)a0;

@end
