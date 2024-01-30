@class TRIPBExtensionRangeOptions;

@interface TRIPBDescriptorProto_ExtensionRange : TRIPBMessage

@property (nonatomic) int start;
@property (nonatomic) BOOL hasStart;
@property (nonatomic) int end;
@property (nonatomic) BOOL hasEnd;
@property (retain, nonatomic) TRIPBExtensionRangeOptions *options;
@property (nonatomic) BOOL hasOptions;

+ (id)descriptor;

@end
