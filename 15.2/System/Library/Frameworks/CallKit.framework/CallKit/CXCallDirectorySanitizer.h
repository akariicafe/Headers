@class NSCharacterSet;

@interface CXCallDirectorySanitizer : NSObject

@property (readonly, nonatomic) NSCharacterSet *phoneNumbersCharacterSet;
@property (readonly, nonatomic) NSCharacterSet *nonPhoneNumbersCharacterSet;
@property (readonly, nonatomic) NSCharacterSet *phoneNumbersIgnoredCharacterSet;

- (void).cxx_destruct;
- (id)init;
- (id)canonicalizedPhoneNumber:(id)a0;

@end
