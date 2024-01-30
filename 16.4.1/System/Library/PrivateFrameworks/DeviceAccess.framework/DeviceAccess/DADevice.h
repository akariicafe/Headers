@class NSURL, NSUUID, NSDictionary, NSString, UTType, NSObject, NSData;
@protocol OS_nw_endpoint;

@interface DADevice : NSObject <CUXPCCodable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double approveTime;
@property (copy, nonatomic) NSDictionary *endpoints;
@property (readonly, copy, nonatomic) NSDictionary *persistentDictionaryRepresentation;
@property (nonatomic) BOOL pendingRemoval;
@property (retain, nonatomic) NSUUID *bluetoothIdentifier;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint;
@property (nonatomic) long long protocol;
@property (retain, nonatomic) UTType *protocolType;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSData *txtRecordData;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) long long mediaPlaybackState;
@property (copy, nonatomic) NSString *mediaContentTitle;
@property (copy, nonatomic) NSString *mediaContentArtistName;

+ (void)mergePersistentDictionary:(id)a0 into:(id)a1;
+ (BOOL)deviceMetadataURLValid:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPersistentDictionaryRepresentation:(id)a0 error:(id *)a1;

@end
