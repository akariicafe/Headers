@interface WFActionEnvironment : NSObject

@property (readonly, nonatomic) BOOL isWatchOS;
@property (readonly, nonatomic) BOOL isAppExtension;

+ (id)currentEnvironment;
+ (id)environmentForWorkflowType:(id)a0;

@end
