@class NSString;

@interface NEIKEv2ConfigurationAttribute : NSObject

@property (retain) NSString *customAttributeName;
@property (readonly) unsigned long long attributeType;
@property (readonly) unsigned long long valueType;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)initEmptyRequest;
- (id)attributeName;

@end
