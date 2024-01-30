@class NSURL;

@interface _KSControlFileController : NSObject {
    NSURL *_url;
}

- (id)contents;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (BOOL)checkIfExists;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (void)setContents:(id)a0;

@end
