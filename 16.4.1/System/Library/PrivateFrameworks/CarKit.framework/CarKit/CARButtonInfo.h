@interface CARButtonInfo : NSObject

@property (readonly, nonatomic) unsigned long long buttonType;
@property (readonly, nonatomic) unsigned long long buttonLocation;
@property (readonly, nonatomic) unsigned long long buttonPressDuration;

- (id)initWithButtonType:(unsigned long long)a0 buttonLocation:(unsigned long long)a1 buttonPressDuration:(unsigned long long)a2;

@end
