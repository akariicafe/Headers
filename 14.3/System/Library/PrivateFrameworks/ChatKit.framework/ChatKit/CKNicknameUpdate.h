@class IMNickname, IMHandle, CNContact;

@interface CKNicknameUpdate : NSObject

@property (retain, nonatomic) IMHandle *handle;
@property (retain, nonatomic) IMNickname *nickname;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) unsigned long long updateType;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_updatedName;
- (id)listTitleText;
- (id)contactWithUpdatedInformation;
- (id)listSubtitleText;

@end
