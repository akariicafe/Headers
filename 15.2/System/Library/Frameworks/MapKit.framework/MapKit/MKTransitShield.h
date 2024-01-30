@class NSString;

@interface MKTransitShield : NSObject <GEOTransitShieldDataSource>

@property (readonly, nonatomic) long long shieldType;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSString *shieldColorString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithShieldType:(long long)a0 text:(id)a1 color:(id)a2;

@end
