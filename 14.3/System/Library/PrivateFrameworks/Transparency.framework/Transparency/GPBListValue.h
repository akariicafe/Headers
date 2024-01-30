@class NSMutableArray;

@interface GPBListValue : GPBMessage

@property (retain, nonatomic) NSMutableArray *valuesArray;
@property (readonly, nonatomic) unsigned long long valuesArray_Count;

+ (id)descriptor;

@end
