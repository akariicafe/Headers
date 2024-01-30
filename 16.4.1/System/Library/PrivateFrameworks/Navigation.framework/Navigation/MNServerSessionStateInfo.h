@class NSData, NSUUID;

@interface MNServerSessionStateInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *sessionState;
@property (readonly, nonatomic) NSUUID *uniqueRouteID;
@property (readonly, nonatomic) NSData *directionsResponseID;
@property (readonly, nonatomic) NSData *etauResponseID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateWithETAUResponse:(id)a0;
- (void)updateWithRoute:(id)a0;
- (void)updateWithSessionState:(id)a0;

@end
