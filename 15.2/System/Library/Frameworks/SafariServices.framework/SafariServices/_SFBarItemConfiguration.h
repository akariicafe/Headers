@class NSString;

@interface _SFBarItemConfiguration : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (copy, nonatomic) id /* block */ menuProvider;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long badge;

- (void).cxx_destruct;
- (id)init;

@end
