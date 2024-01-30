@class NSString, NSURL;

@interface ISReview : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasSavedDraft;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) float rating;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long assetType;
@property (nonatomic) unsigned long long itemIdentifier;
@property (retain, nonatomic) NSURL *infoURL;
@property (retain, nonatomic) NSURL *submitURL;
@property (nonatomic) unsigned long long bodyMaxLength;
@property (nonatomic) BOOL nicknameIsConfirmed;
@property (nonatomic) unsigned long long nicknameMaxLength;
@property (nonatomic) unsigned long long titleMaxLength;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)loadFromDictionary:(id)a0;
- (id)_draftFileName;
- (id)_draftsDirectoryPath;
- (void)mergeWithReview:(id)a0 preferLocalValues:(BOOL)a1;
- (BOOL)removeDraft;
- (BOOL)restoreFromDraft;
- (BOOL)saveAsDraft;

@end
