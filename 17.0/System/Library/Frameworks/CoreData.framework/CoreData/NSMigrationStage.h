@class NSString;

@interface NSMigrationStage : NSObject

@property (copy, nonatomic) NSString *label;

- (id)init;
- (void)dealloc;

@end
