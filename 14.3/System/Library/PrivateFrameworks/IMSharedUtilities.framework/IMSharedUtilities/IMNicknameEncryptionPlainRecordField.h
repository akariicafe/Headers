@class NSString, NSData;

@interface IMNicknameEncryptionPlainRecordField : NSObject

@property (readonly, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) NSData *plainData;

- (void)dealloc;
- (id)description;
- (id)initWithFieldName:(id)a0 plainData:(id)a1;

@end
