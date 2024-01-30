@class NSMutableArray;

@interface ChangeLogNode : GPBMessage

@property (retain, nonatomic) NSMutableArray *mutationsArray;
@property (readonly, nonatomic) unsigned long long mutationsArray_Count;

+ (id)descriptor;

@end
