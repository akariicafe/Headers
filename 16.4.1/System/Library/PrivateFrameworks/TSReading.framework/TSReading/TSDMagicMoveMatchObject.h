@class TSDRep, NSMutableDictionary, NSString;

@interface TSDMagicMoveMatchObject : NSObject

@property (retain, nonatomic) TSDRep *rep;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) long long zOrder;
@property (retain, nonatomic) NSMutableDictionary *attributes;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } stringRange;
@property (retain, nonatomic) NSString *name;

+ (id)matchObjectWithRep:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;
+ (id)matchObjectWithTextRep:(id)a0 position:(struct CGPoint { double x0; double x1; })a1 stringValue:(id)a2 stringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)conflictsWithMatchObject:(id)a0;
- (id)initWithRep:(id)a0 position:(struct CGPoint { double x0; double x1; })a1 stringValue:(id)a2 stringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

@end
