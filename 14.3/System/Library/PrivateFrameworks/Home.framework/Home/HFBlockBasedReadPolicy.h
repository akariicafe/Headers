@class NSString;

@interface HFBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy>

@property (readonly, copy, nonatomic) id /* block */ readPolicyBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
