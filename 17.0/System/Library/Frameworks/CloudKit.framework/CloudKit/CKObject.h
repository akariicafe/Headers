@class NSString, CKObjCClass;

@interface CKObject : NSObject <CKPropertyCoding>

@property (readonly, nonatomic) CKObjCClass *objcClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPropertyDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryPropertyEncoding;

@end
