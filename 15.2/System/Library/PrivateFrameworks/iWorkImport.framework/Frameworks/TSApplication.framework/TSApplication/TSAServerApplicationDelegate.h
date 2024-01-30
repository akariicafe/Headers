@class TSABaseApplicationDelegate;

@interface TSAServerApplicationDelegate : NSObject

@property (class, readonly, nonatomic) TSAServerApplicationDelegate *sharedDelegate;

@property (retain, nonatomic) TSABaseApplicationDelegate *baseApplicationDelegate;

- (void).cxx_destruct;
- (id)init;
- (id)createBaseApplicationDelegate;

@end
