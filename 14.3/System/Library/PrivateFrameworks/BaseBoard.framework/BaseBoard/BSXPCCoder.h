@class NSString, NSKeyedArchiver, NSObject, NSKeyedUnarchiver;
@protocol OS_xpc_object;

@interface BSXPCCoder : NSObject <BSDescriptionProviding, BSXPCSecureCoding, BSXPCEncoding, BSXPCDecoding> {
    NSObject<OS_xpc_object> *_message;
    NSObject<OS_xpc_object> *_xpcConnection;
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

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)coderWithMessage:(id)a0;
+ (id)coder;

- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (id)initWithBSXPCCoder:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (id)_implicitDecodeXPCObjectForKey:(id)a0;
- (unsigned long long)decodeUInt64ForKey:(id)a0;
- (void)encodeCGSize:(struct CGSize { double x0; double x1; })a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decodeCGRectForKey:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)encodeCGPoint:(struct CGPoint { double x0; double x1; })a0 forKey:(id)a1;
- (id)decodeStringForKey:(id)a0;
- (struct CGPoint { double x0; double x1; })decodeCGPointForKey:(id)a0;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { } *)a0 forKey:(id)a1;
- (id)decodeCollectionOfClass:(Class)a0 containingClass:(Class)a1 forKey:(id)a2;
- (id)succinctDescriptionBuilder;
- (id)initWithMessage:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (void)encodeCollection:(id)a0 forKey:(id)a1;
- (void)encodeUInt64:(unsigned long long)a0 forKey:(id)a1;
- (id)createMessage;
- (id)_finishCoding;
- (BOOL)containsValueForKey:(id)a0;
- (void)encodeXPCObject:(id)a0 forKey:(id)a1;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1;
- (void)_removeValueForKey:(id)a0;
- (struct CGSize { double x0; double x1; })decodeCGSizeForKey:(id)a0;

@end
