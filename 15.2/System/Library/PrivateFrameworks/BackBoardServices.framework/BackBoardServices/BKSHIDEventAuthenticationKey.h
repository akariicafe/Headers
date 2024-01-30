@class NSString, NSData;

@interface BKSHIDEventAuthenticationKey : NSObject <NSSecureCoding, BSProtobufSerializable> {
    NSData *_keyData;
    struct { unsigned int ctx[96]; } _hmacContext;
    struct atomic_flag { _Atomic BOOL _Value; } _hmacInitialized;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long generation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)eventAuthenticationKey;
+ (id)eventAuthenticationKeyWithKeyBuffer:(char *)a0 length:(unsigned long long)a1;

@end
