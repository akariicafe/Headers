@class NSString;

@interface MPPlaybackAuthorizationTokenTrustProvider : NSObject <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long requestSource;
@property (retain, nonatomic) NSString *trustID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRequestSource:(long long)a0;

@end
