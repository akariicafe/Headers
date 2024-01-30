@class NSString;

@interface CTCellularPlanDateParser : NSObject <CTCellularPlanValidating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validate:(id)a0;
+ (BOOL)validate:(id)a0 parseTo:(double *)a1;


@end
