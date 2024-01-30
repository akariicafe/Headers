@class NSString, NSMutableDictionary, NSObject, NSMutableArray;

@interface TSUDescription : NSObject {
    NSObject *_object;
    Class _class;
    void *_cfType;
    NSString *_header;
    NSMutableDictionary *_fields;
    NSMutableArray *_fieldOrder;
    unsigned long long _fieldNameWidth;
    BOOL _commaSeparated;
}

+ (id)descriptionWithCFType:(void *)a0 format:(id)a1;
+ (id)descriptionWithObject:(id)a0 class:(Class)a1;
+ (id)descriptionWithObject:(id)a0 format:(id)a1;
+ (id)descriptionWithObject:(id)a0;
+ (id)descriptionWithObject:(id)a0 class:(Class)a1 format:(id)a2;

- (id)initWithObject:(id)a0;
- (id)p_header;
- (id)descriptionString;
- (id)initWithObject:(id)a0 class:(Class)a1 format:(id)a2;
- (void)setFieldOptionCommaSeparated;
- (void)addField:(id)a0 format:(id)a1;
- (void)addFieldValue:(id)a0;
- (id)initWithCFType:(void *)a0 header:(id)a1;
- (void)addFieldWithFormat:(id)a0;
- (id)initWithObject:(id)a0 class:(Class)a1 header:(id)a2;
- (void)dealloc;
- (void)addField:(id)a0 value:(id)a1;
- (void)addSuperDescription;
- (id)initWithObject:(id)a0 format:(id)a1;
- (id)initWithObject:(id)a0 class:(Class)a1 format:(id)a2 arguments:(char *)a3;

@end
