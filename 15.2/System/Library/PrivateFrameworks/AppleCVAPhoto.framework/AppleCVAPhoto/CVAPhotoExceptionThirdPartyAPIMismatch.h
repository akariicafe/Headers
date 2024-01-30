@class NSString;

@interface CVAPhotoExceptionThirdPartyAPIMismatch : CVAPhotoExceptionBase {
    NSString *reasonStr;
}

- (void).cxx_destruct;
- (id)initWithReason:(id)a0;
- (id)getReasonStr;
- (int)getErrorCode;

@end
