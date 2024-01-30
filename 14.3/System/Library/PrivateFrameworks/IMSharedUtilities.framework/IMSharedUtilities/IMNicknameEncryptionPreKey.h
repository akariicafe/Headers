@class IMNicknameFieldTaggingKey, NSData, IMNicknameFieldEncryptionKey, IMNicknameRecordTaggingKey;

@interface IMNicknameEncryptionPreKey : NSObject {
    NSData *_generatedData;
    NSData *_derivedData;
}

@property (readonly, nonatomic) IMNicknameFieldEncryptionKey *fieldEncryptionKey;
@property (readonly, nonatomic) IMNicknameFieldTaggingKey *fieldTaggingKey;
@property (readonly, nonatomic) IMNicknameRecordTaggingKey *recordTaggingKey;

+ (id)preKeyWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)generatePreKeyWithError:(id *)a0;

- (void)dealloc;
- (id)dataRepresentation;
- (id)_subDerviedKeyDataAtIndex:(unsigned long long)a0;
- (id)initWithGeneratedData:(id)a0 derivedData:(id)a1;

@end
