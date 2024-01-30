@interface MBException : NSException

- (int)errorCode;
- (id)initWithCode:(int)a0 format:(id)a1;
- (id)initWithCode:(int)a0 format:(id)a1 args:(char *)a2;
- (id)error;

@end
