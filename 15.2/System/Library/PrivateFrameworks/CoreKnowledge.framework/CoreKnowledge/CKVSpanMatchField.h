@class CKVSpanInfo;

@interface CKVSpanMatchField : NSObject <NSCopying>

@property (readonly, nonatomic) CKVSpanInfo *spanInfo;
@property (readonly, nonatomic) long long fieldType;
@property (readonly, nonatomic) unsigned char fieldComponent;

+ (id)valueMatchWithFieldType:(long long)a0 spanInfo:(id)a1;
+ (id)labelMatchWithFieldType:(long long)a0 spanInfo:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSpanInfo:(id)a0 fieldType:(long long)a1 fieldComponent:(unsigned char)a2;
- (BOOL)isEqualToSpanMatchField:(id)a0;

@end
