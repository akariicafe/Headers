@interface AMDModelOutputMetadata : NSObject

@property long long dataType;

- (BOOL)isValid;
- (id)initWithDictionary:(id)a0;
- (long long)getDataType;

@end
