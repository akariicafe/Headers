@class NSMutableArray;

@interface GPBFieldMask : GPBMessage

@property (retain, nonatomic) NSMutableArray *pathsArray;
@property (readonly, nonatomic) unsigned long long pathsArray_Count;

+ (id)descriptor;

@end
