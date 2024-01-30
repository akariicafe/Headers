@class NSString;

@interface TabCloseUndoGroup : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *name;

- (id)initWithName:(id)a0;
- (id)initWithType:(long long)a0;
- (void).cxx_destruct;
- (id)_initWithType:(long long)a0 name:(id)a1;

@end
