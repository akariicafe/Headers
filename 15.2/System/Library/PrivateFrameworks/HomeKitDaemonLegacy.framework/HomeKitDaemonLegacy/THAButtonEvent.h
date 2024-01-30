@class THAButton;

@interface THAButtonEvent : NSObject

@property (retain, nonatomic) THAButton *button;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double timestamp;

- (id)serialize;
- (void).cxx_destruct;

@end
