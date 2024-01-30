@class NSSet, NSString, CKObjCClass;

@interface CKObject : NSObject <CKPropertyCoding>

@property (readonly, nonatomic) CKObjCClass *objcClass;
@property (readonly, nonatomic) NSSet *propertyNamesNotToEncode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictionaryPropertyEncoding;
- (BOOL)isEqual:(id)a0;
- (id)initWithPropertyDictionary:(id)a0;

@end
