@class NSXPCConnection;
@protocol NSObject;

@interface NSXPCCoder : NSCoder {
    id _reserved1;
}

@property (retain) id<NSObject> userInfo;
@property (readonly) NSXPCConnection *connection;

+ (id)_testEncodeAndDecodeObject:(id)a0 allowedClasses:(id)a1;
+ (id)_testEncodeAndDecodeInvocation:(id)a0 interface:(id)a1;
+ (id)_testEncodeAndDecodeObject:(id)a0 allowedClass:(Class)a1;

- (BOOL)requiresSecureCoding;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { } *)a0 forKey:(id)a1;
- (void)encodeXPCObject:(id)a0 forKey:(id)a1;
- (id)init;
- (id)decodeXPCObjectForKey:(id)a0;
- (void)dealloc;

@end
