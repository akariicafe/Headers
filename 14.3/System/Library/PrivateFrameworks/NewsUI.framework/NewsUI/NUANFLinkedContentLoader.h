@class NSDictionary;
@protocol FCHeadlineProviding, FCContentContext;

@interface NUANFLinkedContentLoader : NSObject

@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (retain, nonatomic) NSDictionary *linkedHeadlines;
@property (readonly, nonatomic) BOOL hasLoaded;

- (void).cxx_destruct;
- (id)loadLinkedContentWithCompletion:(id /* block */)a0;
- (id)initWithHeadline:(id)a0 contentContext:(id)a1;

@end
