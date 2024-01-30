@interface CKException : NSException

@property (readonly, nonatomic) int errorCode;

- (id)error;
- (id)initWithCode:(int)a0 format:(id)a1;
- (id)initWithCode:(int)a0 format:(id)a1 args:(char *)a2;
- (id)initWithName:(id)a0 format:(id)a1;
- (id)initWithName:(id)a0 format:(id)a1 args:(char *)a2;

@end
