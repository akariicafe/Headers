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

+ (BOOL)supportsResolverCallback;
+ (id)endpointWithInternalEndpoint:(id)a0;
+ (Class)copyClassForEndpointType:(int)a0;
+ (unsigned int)endpointType;
+ (id)endpointWithCEndpoint:(id)a0;
+ (id)endpointWithProtocolBufferData:(id)a0;

- (id)encodedData;
- (id)createProtocolBufferObject;
- (id)copyCEndpoint;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (id)description;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)resolveEndpointWithCompletionHandler:(id /* block */)a0;
- (id)initWithEncodedData:(id)a0;

@end
