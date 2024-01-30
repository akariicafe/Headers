@class NSString, TRIPBMethodOptions;

@interface TRIPBMethodDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *inputType;
@property (nonatomic) BOOL hasInputType;
@property (copy, nonatomic) NSString *outputType;
@property (nonatomic) BOOL hasOutputType;
@property (retain, nonatomic) TRIPBMethodOptions *options;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) BOOL clientStreaming;
@property (nonatomic) BOOL hasClientStreaming;
@property (nonatomic) BOOL serverStreaming;
@property (nonatomic) BOOL hasServerStreaming;

+ (id)descriptor;

@end
