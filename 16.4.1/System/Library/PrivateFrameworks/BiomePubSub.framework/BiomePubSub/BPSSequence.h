@class NSEnumerator;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSEnumerator *enumerator;

+ (id)new;

- (void)subscribe:(id)a0;
- (id)bookmarkableUpstreams;
- (id)init;
- (id)initWithEnumerator:(id)a0;
- (void).cxx_destruct;
- (id)initWithSequence:(id)a0;

@end
