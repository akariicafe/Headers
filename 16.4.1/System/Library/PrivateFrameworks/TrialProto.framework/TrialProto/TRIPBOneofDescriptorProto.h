@class NSString, TRIPBOneofOptions;

@interface TRIPBOneofDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (retain, nonatomic) TRIPBOneofOptions *options;
@property (nonatomic) BOOL hasOptions;

+ (id)descriptor;

@end
