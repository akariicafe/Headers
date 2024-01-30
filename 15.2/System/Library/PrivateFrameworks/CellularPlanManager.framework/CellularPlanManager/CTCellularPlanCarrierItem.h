@class NSString;

@interface CTCellularPlanCarrierItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL applePaySupported;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *websheetURL;
@property (readonly, nonatomic) NSString *planPurchaseEndpointType;
@property (readonly, nonatomic) NSString *warningText;
@property (readonly, nonatomic) NSString *addOnWebsheetURL;
@property (readonly, nonatomic) NSString *addOnEndpointType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 url:(id)a1 applePaySupported:(BOOL)a2 responseType:(id)a3 warningText:(id)a4 addOnUrl:(id)a5 addOnEndpointType:(id)a6;

@end
