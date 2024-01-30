@class NSString;

@interface CKVMutableField : CKVField

@property (nonatomic) long long fieldType;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
