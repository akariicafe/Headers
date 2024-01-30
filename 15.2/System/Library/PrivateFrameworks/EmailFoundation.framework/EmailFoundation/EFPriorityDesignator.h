@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)installNewDesignator;
+ (id)pushNewDesignator;
+ (id)currentDesignatorIfExists;
+ (id)currentDesignatorStackIfExists;
+ (void)destroyCurrentDesignator;
+ (id)currentDesignatorStack;

@end
