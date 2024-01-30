@class NSString;

@interface GKEditAction : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) SEL selector;
@property (nonatomic) BOOL destructive;

+ (id)actionWithName:(id)a0 selector:(SEL)a1;
+ (id)deleteActionWithName:(id)a0;

- (void).cxx_destruct;

@end
