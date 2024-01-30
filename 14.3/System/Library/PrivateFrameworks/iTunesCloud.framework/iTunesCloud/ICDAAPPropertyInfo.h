@class NSMutableDictionary;

@interface ICDAAPPropertyInfo : NSObject

@property (class, readonly, nonatomic) ICDAAPPropertyInfo *sharedItemPropertyInfo;
@property (class, readonly, nonatomic) ICDAAPPropertyInfo *sharedContainerPropertyInfo;

@property (retain, nonatomic) NSMutableDictionary *codeMap;
@property (retain, nonatomic) NSMutableDictionary *valueTypeMap;

- (void).cxx_destruct;
- (unsigned int)elementCodeForProperty:(id)a0;
- (void)mapProperty:(id)a0 toCode:(unsigned int)a1 valueType:(long long)a2;
- (long long)valueTypeForProperty:(id)a0;
- (id)_init;
- (BOOL)hasInfoForProperty:(id)a0;

@end
