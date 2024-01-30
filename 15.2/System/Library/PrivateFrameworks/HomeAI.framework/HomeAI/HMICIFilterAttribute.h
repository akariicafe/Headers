@class NSString, HMICIFilterAttributeValue;

@interface HMICIFilterAttribute : HMFObject

@property (readonly) NSString *name;
@property (readonly) NSString *type;
@property (readonly) HMICIFilterAttributeValue *value;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
