@class TSCH3DResource;

@interface TSCH3DPrimitiveInfo : NSObject

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int offset;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, retain, nonatomic) TSCH3DResource *indices;
@property (readonly, nonatomic) BOOL hasOffset;
@property (readonly, nonatomic) BOOL hasCount;
@property (readonly, nonatomic) BOOL hasEmptyCount;

+ (id)infoWithType:(int)a0;
+ (id)infoWithType:(int)a0 offset:(int)a1 count:(unsigned int)a2 indices:(id)a3;

- (id)initWithType:(int)a0;
- (void).cxx_destruct;
- (id)initWithType:(int)a0 offset:(int)a1 count:(unsigned int)a2 indices:(id)a3;

@end
