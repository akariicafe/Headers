@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SPPowerAssertion : NSObject

@property (copy, nonatomic) NSString *reason;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned int powerAssertionId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)drop;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hold;
- (id)assertionName;
- (void)_drop;
- (id)powerAssertionOption;
- (id)assertionType;
- (id)initWithReason:(id)a0 type:(unsigned long long)a1 timeout:(double)a2;

@end
