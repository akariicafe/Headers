@class NSString, NSData, NSObject, EFStringHash;
@protocol OS_os_log, NSSecureCoding, NSCopying, NSObject;

@interface EMObjectID : NSObject <EFLoggable, EFCacheable, NSSecureCoding, NSCopying> {
    unsigned long long _hash;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) id<NSObject, NSSecureCoding, NSCopying> representedObjectID;
@property (readonly, getter=isEphemeral) BOOL ephemeral;
@property (readonly) EFStringHash *stringHash;
@property (readonly, copy, nonatomic) NSData *serializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectIDFromSerializedRepresentation:(id)a0;
+ (void)addDecodableClass:(Class)a0;
+ (id)_decodableClasses;

- (id)initWithRepresentedObjectID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_commonInitAsEphemeralID:(BOOL)a0 representedObjectID:(id)a1;
- (id)initAsEphemeralID:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)cachedSelf;
- (id)initAsEphemeralID:(BOOL)a0 representedObjectID:(id)a1;

@end
