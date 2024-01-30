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

+ (id)rbs_testNSEncode:(id)a0 andDecodeOfExpectedClass:(Class)a1;
+ (id)rbs_testEncode:(id)a0 andDecodeOfExpectedClass:(Class)a1;
+ (id)coderWithMessage:(id)a0;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)coder;

- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (id)createMessage;
- (BOOL)decodeBoolForKey:(id)a0;
- (void)_removeValueForKey:(id)a0;
- (void)encodeUInt64:(unsigned long long)a0 forKey:(id)a1;
- (double)decodeDoubleForKey:(id)a0;
- (id)_finishCoding;
- (long long)decodeInt64ForKey:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)initWithMessage:(id)a0;
- (void)encodeCollection:(id)a0 forKey:(id)a1;
- (id)decodeStringForKey:(id)a0;
- (id)_implicitDecodeXPCObjectForKey:(id)a0;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { } *)a0 forKey:(id)a1;
- (void)dealloc;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)decodeCollectionOfClass:(Class)a0 containingClass:(Class)a1 forKey:(id)a2;
- (unsigned long long)decodeUInt64ForKey:(id)a0;
- (id)init;
- (void)encodeXPCObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)containsValueForKey:(id)a0;

@end
