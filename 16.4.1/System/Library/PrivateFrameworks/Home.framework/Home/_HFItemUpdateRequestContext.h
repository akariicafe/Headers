@class NSDictionary, HFUpdateLogger;
@protocol HFCharacteristicReadPolicy;

@interface _HFItemUpdateRequestContext : NSObject <NSCopying>

@property (nonatomic) SEL senderSelector;
@property (copy, nonatomic) NSDictionary *updateOptions;
@property (retain, nonatomic) HFUpdateLogger *logger;
@property (retain, nonatomic) id<HFCharacteristicReadPolicy> readPolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
