@class IDSCKRecordID;
@protocol IDSCKRecordKeyValueSetting;

@interface IDSCKRecord : NSObject

@property (readonly, copy, nonatomic) IDSCKRecordID *recordID;
@property (readonly, nonatomic) id<IDSCKRecordKeyValueSetting> encryptedValuesByKey;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;

@end
