@class NSMutableArray;

@interface TRIPBFileDescriptorSet : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *fileArray;
@property (readonly, nonatomic) unsigned long long fileArray_Count;

+ (id)descriptor;

@end
