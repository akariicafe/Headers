@class NSString, NSDate;

@interface MGGroupsActivity : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *when;

- (id)initWithName:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
