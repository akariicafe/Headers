@interface TRIPBDescriptorProto_ReservedRange : TRIPBMessage

@property (nonatomic) int start;
@property (nonatomic) BOOL hasStart;
@property (nonatomic) int end;
@property (nonatomic) BOOL hasEnd;

+ (id)descriptor;

@end
