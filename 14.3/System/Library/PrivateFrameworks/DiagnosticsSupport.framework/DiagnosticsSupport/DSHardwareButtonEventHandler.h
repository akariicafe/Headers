@interface DSHardwareButtonEventHandler : NSObject

@property (retain, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL preventPropagation;
@property (nonatomic) unsigned long long events;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToHandler:(id)a0;

@end
