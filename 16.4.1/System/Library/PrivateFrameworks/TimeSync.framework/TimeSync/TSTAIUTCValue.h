@class NSDictionary, NSDate;

@interface TSTAIUTCValue : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *utcDate;
@property (retain, nonatomic) NSDate *taiDate;
@property (nonatomic) unsigned long long modifiedJulianDay;
@property (nonatomic) double constant;
@property (nonatomic) double coefficient;
@property (nonatomic) unsigned long long offset;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)dictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
