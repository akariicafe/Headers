@class NSString;

@interface CVAPhotoExceptionThirdPartyAPIMismatch : CVAPhotoExceptionBase {
    NSString *reasonStr;
}

- (id)initWithReason:(id)a0;
- (void).cxx_destruct;
- (id)getReasonStr;
- (int)getErrorCode;

@end
