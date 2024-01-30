@class NSString, NSSet;

@interface HFServiceState : NSObject

@property (class, readonly, copy, nonatomic) NSString *stateClassIdentifier;
@property (class, readonly, copy, nonatomic) NSSet *requiredCharacteristicTypes;
@property (class, readonly, copy, nonatomic) NSSet *optionalCharacteristicTypes;

@property (readonly, copy, nonatomic) NSString *stateTypeIdentifier;
@property (readonly, nonatomic) long long primaryState;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;

+ (Class)stateClassForServiceDescriptor:(id)a0;
+ (id)stateForServiceDescriptor:(id)a0 withBatchReadResponse:(id)a1;

- (id)initWithBatchReadResponse:(id)a0;

@end
