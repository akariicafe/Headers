@class NSNumber, NSURL, NSError;

@interface SKDownloadChangeset : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *contentLength;
@property (copy, nonatomic) NSURL *contentURL;
@property (copy, nonatomic) NSNumber *downloadID;
@property (copy, nonatomic) NSNumber *downloadState;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSNumber *progress;
@property (copy, nonatomic) NSNumber *timeRemaining;

+ (id)changesetWithDownloadID:(id)a0 state:(long long)a1;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
