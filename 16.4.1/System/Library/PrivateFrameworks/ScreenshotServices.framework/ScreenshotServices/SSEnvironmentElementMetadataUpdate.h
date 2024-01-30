@class NSString, SSHarvestedApplicationMetadata, BSSettings;

@interface SSEnvironmentElementMetadataUpdate : NSObject <BSXPCSecureCoding, SSLoggable>

@property (copy, nonatomic) NSString *environmentElementIdentifier;
@property (retain, nonatomic) SSHarvestedApplicationMetadata *metadata;
@property (readonly, nonatomic) BSSettings *bsSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *loggableDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;

@end
