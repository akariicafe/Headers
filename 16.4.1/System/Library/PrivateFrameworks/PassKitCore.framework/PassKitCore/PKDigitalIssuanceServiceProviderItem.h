@class NSString, NSDecimalNumber;

@interface PKDigitalIssuanceServiceProviderItem : NSObject <PKIdentifiable>

@property (retain, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) unsigned long long unitCount;
@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
