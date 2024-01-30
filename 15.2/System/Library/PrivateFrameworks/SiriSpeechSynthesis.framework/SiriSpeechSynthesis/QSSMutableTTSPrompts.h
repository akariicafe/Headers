@class NSArray, NSData;

@interface QSSMutableTTSPrompts : QSSTTSPrompts

@property (copy, nonatomic) NSArray *prompts;
@property (copy, nonatomic) NSData *prompts_v2;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)prompts_v2:(id /* block */)a0;

@end
