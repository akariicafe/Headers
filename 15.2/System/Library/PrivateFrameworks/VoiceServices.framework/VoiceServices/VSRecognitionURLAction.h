@class NSURL;

@interface VSRecognitionURLAction : VSRecognitionAction {
    NSURL *_url;
}

- (void)setURL:(id)a0;
- (id)perform;
- (id)URL;
- (void)dealloc;
- (int)completionType;

@end
