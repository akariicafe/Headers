@class NSString, NSDate;

@interface PDComment : NSObject {
    struct CGPoint { double x; double y; } mPosition;
    NSString *mText;
    unsigned long long mAuthorId;
    NSDate *mDate;
    unsigned int mIndex;
}

@property (retain, nonatomic) NSString *author;
@property (retain) PDComment *parent;

- (struct CGPoint { double x0; double x1; })position;
- (void)setIndex:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)index;
- (id)text;
- (id)date;
- (id)description;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setDate:(id)a0;
- (void)setText:(id)a0;
- (void)setAuthorId:(unsigned long long)a0;
- (unsigned long long)authorId;

@end
