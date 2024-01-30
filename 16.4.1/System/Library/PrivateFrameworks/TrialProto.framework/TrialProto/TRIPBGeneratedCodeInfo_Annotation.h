@class TRIPBInt32Array, NSString;

@interface TRIPBGeneratedCodeInfo_Annotation : TRIPBMessage

@property (retain, nonatomic) TRIPBInt32Array *pathArray;
@property (readonly, nonatomic) unsigned long long pathArray_Count;
@property (copy, nonatomic) NSString *sourceFile;
@property (nonatomic) BOOL hasSourceFile;
@property (nonatomic) int begin;
@property (nonatomic) BOOL hasBegin;
@property (nonatomic) int end;
@property (nonatomic) BOOL hasEnd;

+ (id)descriptor;

@end
