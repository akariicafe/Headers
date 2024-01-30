@class NSString;

@interface PXApplicationDisabledIdleTimerToken : NSObject

@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned int powerAssertionID;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0 powerAssertionID:(unsigned int)a1;

@end
