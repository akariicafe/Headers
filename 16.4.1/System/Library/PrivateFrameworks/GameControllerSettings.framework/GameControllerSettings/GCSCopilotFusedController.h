@class NSString, NSDate;
@protocol GCSJSONObject;

@interface GCSCopilotFusedController : NSObject <NSSecureCoding, GCSJSONSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<GCSJSONObject> jsonObject;
@property (readonly, nonatomic) NSDate *modifiedDate;
@property (readonly, copy, nonatomic) NSString *fusedControllerIdentifier;
@property (readonly, copy, nonatomic) NSString *pilotIdentifier;
@property (readonly, copy, nonatomic) NSString *copilotIdentifier;

+ (id)archivalClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithJSONObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithFusedControllerIdentifier:(id)a0 pilotIdentifier:(id)a1 copilotIdentifier:(id)a2;

@end
