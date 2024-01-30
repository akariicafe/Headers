@interface CVAPhotoExceptionBase : NSException

- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
- (void)log;
- (id)error;
- (id)getReasonStr;
- (int)getErrorCode;

@end
