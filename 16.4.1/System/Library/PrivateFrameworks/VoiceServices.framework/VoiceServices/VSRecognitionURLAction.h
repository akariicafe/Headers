@class NSURL;

@interface VSRecognitionURLAction : VSRecognitionAction {
    NSURL *_url;
}

- (void)setURL:(id)a0;
- (id)URL;
- (id)perform;
- (void)dealloc;
- (int)completionType;

@end
