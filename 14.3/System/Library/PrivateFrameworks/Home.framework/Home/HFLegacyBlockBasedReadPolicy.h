@class NSString;

@interface HFLegacyBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy>

@property (readonly, copy, nonatomic) id /* block */ readValidator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
