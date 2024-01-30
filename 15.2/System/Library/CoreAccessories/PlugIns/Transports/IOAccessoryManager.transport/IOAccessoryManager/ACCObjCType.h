@class NSString;

@interface ACCObjCType : NSObject

@property (readonly, nonatomic) long long code;
@property (readonly, nonatomic) NSString *encoding;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic, getter=isNumber) BOOL number;
@property (readonly, nonatomic, getter=isIntegerNumber) BOOL integerNumber;
@property (readonly, nonatomic, getter=isFloatingPointNumber) BOOL floatingPointNumber;
@property (readonly, nonatomic, getter=isObject) BOOL object;

+ (id)typeForValue:(id)a0;
+ (id)typeForEncoding:(const char *)a0;

- (void).cxx_destruct;
- (id)objectWithBytes:(const void *)a0;
- (void)getBytes:(void *)a0 forObject:(id)a1;
- (id)initWithCode:(long long)a0 encoding:(id)a1 name:(id)a2 className:(id)a3 size:(unsigned long long)a4 flags:(unsigned long long)a5;

@end
