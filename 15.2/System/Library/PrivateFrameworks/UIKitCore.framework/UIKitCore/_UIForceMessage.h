@class NSString;

@interface _UIForceMessage : NSObject <_UIForceObservationMessageConstructing>

@property (nonatomic) double touchForce;
@property (nonatomic) unsigned long long stage;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic, getter=isReset) BOOL reset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observe:(id /* block */)a0;
+ (id)reset;


@end
