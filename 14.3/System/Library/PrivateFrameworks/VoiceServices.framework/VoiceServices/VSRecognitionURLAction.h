@class NSURL;

@interface VSRecognitionURLAction : VSRecognitionAction {
    NSURL *_url;
}

- (id)perform;
- (id)URL;
- (void)dealloc;
- (int)completionType;
- (void)setURL:(id)a0;

@end
