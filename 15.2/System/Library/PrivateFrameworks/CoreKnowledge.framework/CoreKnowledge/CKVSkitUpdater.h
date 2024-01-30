@class CKVLocalization, NSString, NSObject;
@protocol CKVSkitWriteAccess;

@interface CKVSkitUpdater : NSObject {
    NSObject<CKVSkitWriteAccess> *_skit;
    CKVLocalization *_localization;
    NSString *_originAppId;
}

@property (readonly, nonatomic) unsigned long long insertCount;
@property (readonly, nonatomic) unsigned long long deleteCount;

- (void).cxx_destruct;
- (id)init;
- (BOOL)insertItem:(id)a0 recordId:(id)a1;
- (BOOL)deleteItemWithRecordId:(id)a0;
- (BOOL)setLocale;
- (id)initWithWriteAccess:(id)a0 localization:(id)a1 originApp:(id)a2;

@end
