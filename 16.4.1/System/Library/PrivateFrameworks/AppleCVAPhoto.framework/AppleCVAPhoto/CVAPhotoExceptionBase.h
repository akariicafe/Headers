@interface CVAPhotoExceptionBase : NSException

- (void)log;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
- (id)error;
- (int)getErrorCode;
- (id)getReasonStr;

@end
