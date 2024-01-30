@interface MMCSGetFile : MMCSSimpleFile

@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ progressUpdateBlock;

- (void)dealloc;
- (void)setProgress:(double)a0;

@end
