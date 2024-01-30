@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)pushNewDesignator;
+ (id)currentDesignatorIfExists;
+ (id)installNewDesignator;
+ (void)destroyCurrentDesignator;
+ (id)currentDesignatorStack;
+ (id)currentDesignatorStackIfExists;

@end
