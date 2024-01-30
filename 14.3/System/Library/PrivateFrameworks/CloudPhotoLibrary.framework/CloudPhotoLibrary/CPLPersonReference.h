@class NSString, NSDictionary;

@interface CPLPersonReference : NSObject <NSSecureCoding, NSCopying, CPLReference>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *personIdentifier;
@property (copy, nonatomic) NSDictionary *extraProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSerializedString:(id)a0;
- (id)serializedString;
- (id)initWithCPLArchiver:(id)a0;
- (id)plistArchiveWithCPLArchiver:(id)a0;

@end
