@class INIntent;

@interface CRHandleIntentCommand : CRBasicPayloadCommand

@property (copy, nonatomic) INIntent *intent;

- (id)payload;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
