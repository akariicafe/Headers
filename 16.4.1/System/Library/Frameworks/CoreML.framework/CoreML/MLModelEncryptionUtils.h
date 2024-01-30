@class NSData;

@interface MLModelEncryptionUtils : NSObject

@property (class, readonly, retain, nonatomic) NSData *sinfData;

+ (BOOL)addEncryptionHeaderToUnencryptedFile:(id)a0 saveToFile:(id)a1 error:(id *)a2;
+ (BOOL)encryptFile:(id)a0 withKey:(id)a1 iv:(id)a2 saveToFile:(id)a3 error:(id *)a4;

@end
