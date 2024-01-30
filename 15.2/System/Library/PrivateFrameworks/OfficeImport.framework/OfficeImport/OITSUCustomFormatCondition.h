@class OITSUCustomFormatData;

@interface OITSUCustomFormatCondition : NSObject <NSCopying>

@property (readonly, nonatomic) int conditionType;
@property (readonly, nonatomic) double conditionValue;
@property (readonly, nonatomic) OITSUCustomFormatData *data;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithType:(int)a0 value:(double)a1 data:(id)a2;

@end
