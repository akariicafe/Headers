@class NSString, NSUUID;

@interface CXCall : NSObject <NSSecureCoding, CXCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *providerIdentifier;
@property (nonatomic, getter=isOutgoing) BOOL outgoing;
@property (nonatomic, getter=isOnHold) BOOL onHold;
@property (nonatomic) BOOL hasConnected;
@property (nonatomic) BOOL hasEnded;
@property (nonatomic, getter=isEndpointOnCurrentDevice) BOOL endpointOnCurrentDevice;
@property (nonatomic, getter=isHostedOnCurrentDevice) BOOL hostedOnCurrentDevice;
@property (nonatomic, getter=isVideo) BOOL video;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToCall:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
