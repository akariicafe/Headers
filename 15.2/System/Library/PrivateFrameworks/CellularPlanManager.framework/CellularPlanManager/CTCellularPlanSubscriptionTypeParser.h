@class NSString;

@interface CTCellularPlanSubscriptionTypeParser : NSObject <CTCellularPlanValidating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validate:(id)a0;
+ (BOOL)validate:(id)a0 parseTo:(int *)a1;


@end
