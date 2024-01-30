@class NSString;

@interface PDCommentAuthor : NSObject {
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (unsigned int)id;
- (void)setName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setId:(unsigned int)a0;
- (id)description;
- (id)name;
- (id)initials;
- (unsigned int)colorIndex;
- (void)setColorIndex:(unsigned int)a0;
- (void)setLastCommentIndex:(unsigned int)a0;
- (void)setInitials:(id)a0;
- (unsigned int)lastCommentIndex;

@end
