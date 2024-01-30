@class NSString, NSURL;

@interface NUScript : NSObject

@property (retain) NSString *source;
@property (readonly, nonatomic) NSURL *url;

- (BOOL)load:(out id *)a0;
- (id)initWithSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)description;

@end
