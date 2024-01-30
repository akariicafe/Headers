@class NSString, NSData, IMNicknameEncryptionFieldTag;

@interface IMNicknameEncryptionCipherRecordField : NSObject

@property (readonly, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) NSData *cipherData;
@property (readonly, nonatomic) NSData *IV;
@property (readonly, nonatomic) IMNicknameEncryptionFieldTag *tag;

+ (id)cipherRecordFieldWithFieldName:(id)a0 dataRepresentation:(id)a1 error:(id *)a2;

- (void)dealloc;
- (id)dataRepresentationWithError:(id *)a0;
- (id)description;
- (id)initWithFieldName:(id)a0 cipherData:(id)a1 IV:(id)a2 tag:(id)a3;

@end
