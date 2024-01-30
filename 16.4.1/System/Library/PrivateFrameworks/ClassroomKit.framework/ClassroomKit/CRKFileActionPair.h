@class NSURL;

@interface CRKFileActionPair : NSObject

@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSURL *destinationURL;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1;

@end
