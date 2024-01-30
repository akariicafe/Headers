@interface AMDModelOutputMetadata : NSObject

@property long long dataType;

- (id)initWithDictionary:(id)a0;
- (BOOL)isValid;
- (long long)getDataType;

@end
