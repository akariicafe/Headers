@class NSDate;

@interface TVRUIButtonEvent : NSObject

@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) long long buttonType;
@property (readonly, nonatomic) long long eventType;

+ (id)createButtonEvent:(long long)a0 buttonType:(long long)a1;

- (void).cxx_destruct;
- (id)description;
- (id)_initWithButtonType:(long long)a0 eventType:(long long)a1;

@end
