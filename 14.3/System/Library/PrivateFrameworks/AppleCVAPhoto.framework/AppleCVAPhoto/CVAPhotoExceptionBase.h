@interface CVAPhotoExceptionBase : NSException

- (id)error;
- (void)log;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
- (id)getReasonStr;
- (int)getErrorCode;

@end
