@class NSString, NSDictionary;

@interface CUStateEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)exitState;
+ (id)initialTransition;
+ (id)enterState;

- (id)initWithName:(id)a0 userInfo:(id)a1;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
