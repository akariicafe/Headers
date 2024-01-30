@class NSString, NSArray;

@interface WiFiP2PAWDLState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) BOOL supportsSoloMode;
@property (readonly, nonatomic) NSArray *channelSequence;

+ (id)currentState;
+ (id)empty;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInterfaceName:(id)a0 supportsSoloMode:(BOOL)a1 channelSequence:(id)a2;

@end
