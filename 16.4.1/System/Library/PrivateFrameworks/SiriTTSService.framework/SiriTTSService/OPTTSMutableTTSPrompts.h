@class NSArray, NSData;

@interface OPTTSMutableTTSPrompts : OPTTSTTSPrompts

@property (copy, nonatomic) NSArray *prompts;
@property (copy, nonatomic) NSData *prompts_v2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)prompts_v2:(id /* block */)a0;

@end
