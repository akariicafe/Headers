@class NSString, NSData;

@interface IMNicknameEncryptionPlainRecordField : NSObject

@property (readonly, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) NSData *plainData;

- (id)description;
- (void)dealloc;
- (id)initWithFieldName:(id)a0 plainData:(id)a1;

@end
