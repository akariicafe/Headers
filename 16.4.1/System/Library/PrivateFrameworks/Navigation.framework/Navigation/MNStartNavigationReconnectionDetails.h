@class NSArray, NSData;

@interface MNStartNavigationReconnectionDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isReconnecting;
@property (nonatomic) unsigned long long targetLegIndex;
@property (retain, nonatomic) NSArray *spokenAnnouncements;
@property (retain, nonatomic) NSData *serverSessionState;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
