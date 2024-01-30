@interface BKSHIDEventRedirectAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) int pid;

+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
