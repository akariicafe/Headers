@class NSString, NWInterface, NSData, NSObject;
@protocol OS_nw_endpoint;

@interface NWEndpoint : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_nw_endpoint> *internalEndpoint;
@property (retain, nonatomic) NWInterface *interface;
@property (readonly, nonatomic) NSString *parentEndpointDomain;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (nonatomic) unsigned short alternatePort;
@property (nonatomic) long long remoteInterfaceType;
@property (retain, nonatomic) NSData *txtRecord;

+ (unsigned int)endpointType;
+ (id)endpointWithCEndpoint:(id)a0;
+ (Class)copyClassForEndpointType:(int)a0;
+ (id)endpointWithInternalEndpoint:(id)a0;
+ (BOOL)supportsResolverCallback;
+ (id)endpointWithProtocolBufferData:(id)a0;

- (id)copyCEndpoint;
- (void)resolveEndpointWithCompletionHandler:(id /* block */)a0;
- (id)createProtocolBufferObject;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (id)encodedData;
- (id)initWithEncodedData:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
