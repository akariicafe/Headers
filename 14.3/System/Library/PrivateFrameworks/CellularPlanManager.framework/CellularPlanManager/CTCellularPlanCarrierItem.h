@class NSString;

@interface CTCellularPlanCarrierItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL applePaySupported;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *websheetURL;
@property (readonly, nonatomic) NSString *planPurchaseEndpointType;
@property (readonly, nonatomic) NSString *warningText;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 url:(id)a1 applePaySupported:(BOOL)a2 responseType:(id)a3 warningText:(id)a4;

@end
