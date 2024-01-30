@class IMNickname, IMHandle, CNContact;

@interface CKNicknameUpdate : NSObject

@property (retain, nonatomic) IMHandle *handle;
@property (retain, nonatomic) IMNickname *nickname;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) unsigned long long updateType;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_updatedName;
- (id)contactWithUpdatedInformation;
- (id)listSubtitleText;
- (id)listTitleText;

@end
