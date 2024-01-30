@class NSMutableSet;

@interface PHPersistentChangeEnumerationContext : NSObject

@property (readonly, nonatomic) NSMutableSet *untrashedIdentifiersAsInserts;
@property (readonly, nonatomic) NSMutableSet *trashedIdentifiersAsDeletes;

- (id)init;
- (void).cxx_destruct;

@end
