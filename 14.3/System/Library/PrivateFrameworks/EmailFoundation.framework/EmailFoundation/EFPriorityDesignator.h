@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)pushNewDesignator;
+ (id)installNewDesignator;
+ (id)currentDesignatorStackIfExists;
+ (id)currentDesignatorStack;
+ (void)destroyCurrentDesignator;
+ (id)currentDesignatorIfExists;

@end
