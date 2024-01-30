@class TSABaseApplicationDelegate;

@interface TSAServerApplicationDelegate : NSObject

@property (class, readonly, nonatomic) TSAServerApplicationDelegate *sharedDelegate;

@property (retain, nonatomic) TSABaseApplicationDelegate *baseApplicationDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)createBaseApplicationDelegate;

@end
