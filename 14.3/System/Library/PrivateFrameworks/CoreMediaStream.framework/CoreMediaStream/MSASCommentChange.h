@class MSASComment;

@interface MSASCommentChange : NSObject

@property (retain, nonatomic) MSASComment *comment;
@property (nonatomic) int deletionIndex;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)description;

@end
