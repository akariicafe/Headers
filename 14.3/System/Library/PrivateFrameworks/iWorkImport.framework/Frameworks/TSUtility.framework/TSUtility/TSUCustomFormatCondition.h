@class TSUCustomFormatData;

@interface TSUCustomFormatCondition : NSObject <NSCopying>

@property (readonly, nonatomic) int conditionType;
@property (readonly, nonatomic) double conditionValue;
@property (readonly, nonatomic) TSUCustomFormatData *data;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(int)a0 value:(double)a1 data:(id)a2;

@end
