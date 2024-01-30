@class NSString, NSKeyedArchiver, NSObject, NSKeyedUnarchiver;
@protocol OS_xpc_object;

@interface RBSXPCCoder : NSObject <RBSXPCEncoding, RBSXPCDecoding> {
    NSObject<OS_xpc_object> *_codingContext;
    NSKeyedArchiver *_archiver;
    NSKeyedUnarchiver *_unarchiver;
    int _finalized;
}

@property (readonly, retain, nonatomic) NSObject<OS_xpc_object> *message;
@property (readonly, retain, nonatomic) NSObject<OS_xpc_object> *XPCConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coder;
+ (id)rbs_testEncode:(id)a0 andDecodeOfExpectedClass:(Class)a1;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)rbs_testNSEncode:(id)a0 andDecodeOfExpectedClass:(Class)a1;
+ (id)coderWithMessage:(id)a0;

- (BOOL)decodeBoolForKey:(id)a0;
- (BOOL)containsValueForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (void)encodeUInt64:(unsigned long long)a0 forKey:(id)a1;
- (id)decodeStringForKey:(id)a0;
- (id)_finishCoding;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (id)initWithMessage:(id)a0;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeCollection:(id)a0 forKey:(id)a1;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)createMessage;
- (id)decodeCollectionOfClass:(Class)a0 containingClass:(Class)a1 forKey:(id)a2;
- (void)_removeValueForKey:(id)a0;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { } *)a0 forKey:(id)a1;
- (void)encodeXPCObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_implicitDecodeXPCObjectForKey:(id)a0;
- (unsigned long long)decodeUInt64ForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;

@end
