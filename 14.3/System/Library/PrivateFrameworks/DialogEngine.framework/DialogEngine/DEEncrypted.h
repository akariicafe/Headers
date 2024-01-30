@interface DEEncrypted : NSObject

+ (BOOL)isSymmetric:(unsigned long long)a0;
+ (id)getKeyWithVersion:(id)a0 symmetric:(BOOL *)a1;
+ (id)getSymmetricSrc:(id)a0 publicKey:(id)a1;
+ (id)getSymmetricKey:(id)a0 symmetricKeyIV:(id)a1 signature:(id)a2;
+ (BOOL)decryptFrom:(id)a0 to:(id)a1 allowAllKeys:(BOOL)a2 keyVersion:(id *)a3;
+ (BOOL)isPrivateKey:(id)a0 publicKey:(id)a1;
+ (id)decrypt:(id)a0 keyVersion:(id *)a1;
+ (id)getSymmetricKey:(id)a0 publicKey:(id)a1 symmetricKeyIV:(id *)a2 signature:(id *)a3;
+ (BOOL)encryptFrom:(id)a0 to:(id)a1 keyId:(unsigned long long)a2 privateKey:(id)a3 encryptedPb:(struct Encrypted { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x10; BOOL x11; } *)a4;
+ (BOOL)wrapFrom:(id)a0 to:(id)a1 encryptedPb:(struct Encrypted { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x10; BOOL x11; } *)a2 multipart:(BOOL)a3;
+ (BOOL)decryptFrom:(id)a0 to:(id)a1 version:(id)a2 allowAllKeys:(BOOL)a3;
+ (BOOL)encryptFrom:(id)a0 to:(id)a1 keyId:(unsigned long long)a2 privateKey:(id)a3 multipart:(BOOL)a4;
+ (id)toEnvelope:(BOOL)a0 iv:(id)a1 hmac:(id)a2 keyVersion:(id)a3 payload:(id)a4;
+ (id)decryptAll:(id)a0;
+ (BOOL)decryptAllFrom:(id)a0 to:(id)a1;
+ (id)encrypt:(id)a0 keyId:(unsigned long long)a1 privateKey:(id)a2 multipart:(BOOL)a3;
+ (id)getKey:(unsigned long long)a0;
+ (id)versionFile:(id)a0;
+ (id)getKeyWithVersion:(id)a0;
+ (id)encryptFrom:(id)a0 name:(id)a1 base:(id)a2 keyId:(unsigned long long)a3 privateKey:(id)a4 multipart:(BOOL)a5;
+ (id)decrypt:(id)a0 allowAllKeys:(BOOL)a1 keyVersion:(id *)a2;
+ (id)decryptFrom:(id)a0 name:(id)a1 base:(id)a2;
+ (BOOL)decryptFrom:(id)a0 to:(id)a1 version:(id)a2;
+ (id)decrypt:(id)a0;

@end
