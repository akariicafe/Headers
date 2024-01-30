@class SBSHardwareButtonService, NSString;
@protocol SBSHardwareButtonEventConsuming;

@interface _SBSHardwareButtonEventConsumerInfo : NSObject <BSInvalidatable>

@property (nonatomic, getter=isValid) BOOL valid;
@property (weak, nonatomic) SBSHardwareButtonService *service;
@property (retain, nonatomic) id<SBSHardwareButtonEventConsuming> consumer;
@property (nonatomic) long long buttonKind;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) long long eventPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoWithConsumer:(id)a0;

@end
