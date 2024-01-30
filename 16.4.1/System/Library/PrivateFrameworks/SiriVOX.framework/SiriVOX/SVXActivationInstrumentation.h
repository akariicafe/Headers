@class NSUUID;

@interface SVXActivationInstrumentation : NSObject

@property (readonly, nonatomic) NSUUID *turnIdentifier;
@property (readonly, nonatomic) unsigned long long buttonDownTimestamp;

- (void).cxx_destruct;
- (id)initWithTurnIdentifier:(id)a0 buttonTimestamp:(unsigned long long)a1;

@end
