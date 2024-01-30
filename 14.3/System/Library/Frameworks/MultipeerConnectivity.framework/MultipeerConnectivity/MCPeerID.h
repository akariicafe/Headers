@class NSString, MCPeerIDInternal;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding> {
    MCPeerIDInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayName;

- (id)serializedRepresentation;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)pid;
- (void)dealloc;
- (unsigned long long)pid64;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)idString;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDisplayName:(id)a0;
- (id)displayNameAndPID;
- (id)initWithIDString:(id)a0 displayName:(id)a1;
- (id)internalDescription;
- (id)initWithPID:(unsigned int)a0 displayName:(id)a1;

@end
