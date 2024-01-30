@class NSURL;

@interface _KSControlFileController : NSObject {
    NSURL *_url;
}

- (id)contents;
- (void)setContents:(id)a0;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)checkIfExists;
- (void)reset;

@end
