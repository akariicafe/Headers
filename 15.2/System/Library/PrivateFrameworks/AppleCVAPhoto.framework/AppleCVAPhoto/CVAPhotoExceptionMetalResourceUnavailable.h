@interface CVAPhotoExceptionMetalResourceUnavailable : CVAPhotoExceptionBase

+ (id)error;
+ (id)throwIfNil:(id)a0;

- (id)init;
- (id)getReasonStr;
- (int)getErrorCode;

@end
