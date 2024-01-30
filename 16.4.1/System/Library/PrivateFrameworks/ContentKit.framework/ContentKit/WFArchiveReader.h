@interface WFArchiveReader : NSObject

@property (readonly, nonatomic) struct archive { } *archive;

- (id)extractArchiveToDestinationURL:(id)a0 error:(id *)a1;
- (id)initWithArchiveFile:(id)a0 error:(id *)a1;

@end
