@class NSArray;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSArray *sequence;

- (id)bookmarkableUpstreams;
- (id)initWithSequence:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)subscribe:(id)a0;

@end
