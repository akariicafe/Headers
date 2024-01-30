@class NSString;

@interface NEIKEv2ConfigurationAttribute : NSObject <NEPrettyDescription> {
    NSString *_customAttributeName;
}

@property (readonly) unsigned long long attributeType;
@property (readonly) unsigned long long valueType;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)attributeName;
- (id)initEmptyRequest;

@end
