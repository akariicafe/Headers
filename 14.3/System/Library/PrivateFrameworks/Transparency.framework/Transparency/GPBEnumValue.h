@class NSString, NSMutableArray;

@interface GPBEnumValue : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int number;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count;

+ (id)descriptor;

@end
