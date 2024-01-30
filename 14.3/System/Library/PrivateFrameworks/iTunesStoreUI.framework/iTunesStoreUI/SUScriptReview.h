@class SKUIReviewMetadata, NSString, NSURL, NSNumber;

@interface SUScriptReview : SUScriptObject {
    NSURL *_infoURL;
    SKUIReviewMetadata *_review;
}

@property (readonly) NSNumber *adamID;
@property (retain) NSString *body;
@property (readonly) id hasSavedDraft;
@property (retain) NSString *infoURL;
@property (retain) NSString *itemType;
@property (retain) NSString *nickname;
@property (retain) id nicknameIsConfirmed;
@property (retain) NSNumber *rating;
@property (retain) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)copyReview;
- (id)initWithReview:(id)a0;
- (id)removeDraft;
- (id)restoreFromDraft;
- (id)saveAsDraft;

@end
