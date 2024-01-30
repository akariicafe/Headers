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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)loadFromDictionary:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)removeDraft;
- (BOOL)restoreFromDraft;
- (BOOL)saveAsDraft;
- (id)_draftsDirectoryPath;
- (id)_draftFileName;
- (void)mergeWithReview:(id)a0 preferLocalValues:(BOOL)a1;

@end
