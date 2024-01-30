@interface _SFBarItemConfiguration : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) id /* block */ menuProvider;

- (id)init;
- (void).cxx_destruct;

@end
