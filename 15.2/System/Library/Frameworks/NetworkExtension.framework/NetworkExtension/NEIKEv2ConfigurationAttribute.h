@class NSString;

@interface NEIKEv2ConfigurationAttribute : NSObject

@property (retain) NSString *customAttributeName;
@property (readonly) unsigned long long attributeType;
@property (readonly) unsigned long long valueType;

+ (id)copyTypeDescription;

- (id)attributeName;
- (id)initEmptyRequest;
- (void).cxx_destruct;

@end
