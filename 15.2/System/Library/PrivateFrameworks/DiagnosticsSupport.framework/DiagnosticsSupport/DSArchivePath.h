@class NSURL, NSString;

@interface DSArchivePath : NSObject

@property (retain, nonatomic) NSURL *sourceUrl;
@property (retain, nonatomic) NSString *prefix;
@property (nonatomic) BOOL root;

+ (id)archivePathWithSource:(id)a0 prefix:(id)a1 root:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0 prefix:(id)a1 root:(BOOL)a2;

@end
