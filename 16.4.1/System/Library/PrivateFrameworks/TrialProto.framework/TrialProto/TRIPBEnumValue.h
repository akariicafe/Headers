@class NSString, NSMutableArray;

@interface TRIPBEnumValue : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int number;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count;

+ (id)descriptor;

@end
