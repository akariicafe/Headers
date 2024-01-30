@interface TSCEAbortObject : NSObject

@property (readonly) BOOL isAborted;

- (id)initWithSecondsTillAbort:(int)a0;

@end
