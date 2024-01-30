@class NSString;

@interface PDCommentAuthor : NSObject {
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (void)setId:(unsigned int)a0;
- (void)setName:(id)a0;
- (unsigned int)id;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)name;
- (id)initials;
- (void)setInitials:(id)a0;
- (unsigned int)colorIndex;
- (void)setColorIndex:(unsigned int)a0;
- (void)setLastCommentIndex:(unsigned int)a0;
- (unsigned int)lastCommentIndex;

@end
