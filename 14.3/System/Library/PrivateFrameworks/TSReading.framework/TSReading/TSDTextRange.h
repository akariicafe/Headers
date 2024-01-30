@interface TSDTextRange : UITextRange

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) BOOL isAtEndOfLine;
@property (readonly, nonatomic) float preferredStartPosition;
@property (readonly, nonatomic) float preferredEndPosition;

+ (id)textRangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)textRangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 eolAffinity:(BOOL)a1 preferredStartPosition:(float)a2 preferredEndPosition:(float)a3;

- (id)end;
- (BOOL)isEmpty;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 eolAffinity:(BOOL)a1 preferredStartPosition:(float)a2 preferredEndPosition:(float)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)start;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
