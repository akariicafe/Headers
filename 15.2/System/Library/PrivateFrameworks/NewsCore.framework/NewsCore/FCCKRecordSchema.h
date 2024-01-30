@class NSDictionary, NSString;

@interface FCCKRecordSchema : NSObject {
    NSDictionary *_fieldSchemasByName;
    NSString *_clientRecordType;
    NSString *_serverRecordType;
}

- (void).cxx_destruct;
- (id)init;

@end
