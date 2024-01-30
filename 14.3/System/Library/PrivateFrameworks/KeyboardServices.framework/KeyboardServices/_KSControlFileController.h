@class NSURL;

@interface _KSControlFileController : NSObject {
    NSURL *_url;
}

- (void).cxx_destruct;
- (void)reset;
- (id)contents;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (id)description;
- (void)setContents:(id)a0;
- (BOOL)checkIfExists;

@end
