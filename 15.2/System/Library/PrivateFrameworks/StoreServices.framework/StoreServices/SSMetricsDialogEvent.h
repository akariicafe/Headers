@class NSString, NSDictionary, NSArray;

@interface SSMetricsDialogEvent : SSMetricsBaseEvent <SSXPCCoding>

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *actionURL;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSString *dialogId;
@property (copy, nonatomic) NSString *dialogType;
@property (copy, nonatomic) NSString *dualAction;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *result;
@property (copy, nonatomic) NSString *targetId;
@property (copy, nonatomic) NSArray *userActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)init;

@end
