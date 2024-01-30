@interface MMCSGetFile : MMCSSimpleFile

@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ progressUpdateBlock;

- (void)setProgress:(double)a0;
- (void)dealloc;

@end
