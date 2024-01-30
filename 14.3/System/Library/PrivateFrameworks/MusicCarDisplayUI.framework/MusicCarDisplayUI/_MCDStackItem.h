@class NSString, NSIndexPath;

@interface _MCDStackItem : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSIndexPath *indexPath;

+ (id)stackItemWithContainer:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
