@class NSString, NSArray, PKPaymentPassAction;
@protocol NPKDateRange;

@interface NPKCommutePlanField : NSObject <NPKCommutePlanField>

@property (readonly, nonatomic) NSString *detailLabel;
@property (readonly, nonatomic) id<NPKDateRange> usageDateRange;
@property (readonly, nonatomic) BOOL isCountBasedCommutePlan;
@property (readonly, nonatomic) NSArray *details;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *formattedValue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PKPaymentPassAction *action;
@property (readonly, nonatomic) BOOL hasPendingUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 detailLabel:(id)a1 formattedValue:(id)a2 usageDateRange:(id)a3 identifier:(id)a4 details:(id)a5 action:(id)a6;

@end
