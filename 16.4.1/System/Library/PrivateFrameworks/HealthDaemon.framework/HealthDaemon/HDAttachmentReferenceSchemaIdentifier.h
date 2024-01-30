@class NSString, NSUUID;

@interface HDAttachmentReferenceSchemaIdentifier : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *schemaIdentifier;
@property (readonly, nonatomic) long long schemaVersion;
@property (readonly, copy, nonatomic) NSString *objectIdentifier;
@property (readonly, copy, nonatomic) NSUUID *attachmentIdentifier;

+ (id)tombstoneSchemaIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSchemaIdentifier:(id)a0 schemaVersion:(long long)a1 objectIdentifier:(id)a2 attachmentIdentifier:(id)a3;

@end
