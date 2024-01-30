@interface BLTPBActionFactory : NSObject

+ (id)sharedInstance;
+ (id)bltVersionToFactories;

- (id)actionWithBBAction:(id)a0;

@end
