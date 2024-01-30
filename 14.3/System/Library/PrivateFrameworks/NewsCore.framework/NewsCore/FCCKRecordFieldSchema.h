@class NSString;

@interface FCCKRecordFieldSchema : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isEncrypted;

+ (id)fieldWithName:(id)a0 isEncrypted:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFieldName:(id)a0 isEncrypted:(BOOL)a1;

@end
