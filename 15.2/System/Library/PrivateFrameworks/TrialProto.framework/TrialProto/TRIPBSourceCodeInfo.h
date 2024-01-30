@class NSMutableArray;

@interface TRIPBSourceCodeInfo : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *locationArray;
@property (readonly, nonatomic) unsigned long long locationArray_Count;

+ (id)descriptor;

@end
