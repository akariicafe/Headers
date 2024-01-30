@class NSMutableArray;

@interface TRIPBFieldMask : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *pathsArray;
@property (readonly, nonatomic) unsigned long long pathsArray_Count;

+ (id)descriptor;

@end
