@class INIntent;

@interface CRHandleIntentCommand : CRBasicPayloadCommand

@property (copy, nonatomic) INIntent *intent;

- (id)payload;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
