@class NSMutableDictionary, RPCompanionLinkDevice;

@interface RPStatusDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RPCompanionLinkDevice *device;
@property (retain, nonatomic) NSMutableDictionary *statusInfoMap;
@property (retain, nonatomic) NSMutableDictionary *statusStateMap;

- (id)initWithDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getIdentifier;
- (void).cxx_destruct;

@end
