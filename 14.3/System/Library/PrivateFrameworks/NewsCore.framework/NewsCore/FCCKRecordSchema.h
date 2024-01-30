@class NSString, NSArray, NSDictionary;

@interface FCCKRecordSchema : NSObject {
    NSDictionary *_fieldSchemasByName;
}

@property (readonly, copy, nonatomic) NSString *clientRecordType;
@property (readonly, copy, nonatomic) NSString *serverRecordType;
@property (readonly, nonatomic) BOOL hasEncryptedFields;
@property (readonly, copy, nonatomic) NSArray *allEncryptedFieldNames;
@property (readonly, copy, nonatomic) NSArray *allUnencryptedFieldNames;

+ (id)recordWithClientType:(id)a0 serverType:(id)a1 fields:(id)a2;

- (BOOL)isFieldEncrypted:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isFieldKnown:(id)a0;
- (id)initWithClientRecordType:(id)a0 serverRecordType:(id)a1 fieldSchemas:(id)a2;

@end
