@class NSDictionary, NSString;

@interface HAP2EncodedAttributeDatabaseResponseCached : HAP2LoggingObject <HAP2EncodedAttributeDatabaseResponse>

@property (readonly, nonatomic) NSDictionary *attributeDatabase;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAttributeDatabase:(id)a0;

@end
