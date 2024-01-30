@interface DSHardwareButtonEventHandler : NSObject

@property (retain, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL preventPropagation;
@property (nonatomic) unsigned long long events;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToHandler:(id)a0;

@end
