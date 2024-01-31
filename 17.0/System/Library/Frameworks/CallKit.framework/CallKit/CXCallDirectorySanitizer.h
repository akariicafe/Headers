@class NSCharacterSet;

@interface CXCallDirectorySanitizer : NSObject

@property (readonly, nonatomic) NSCharacterSet *phoneNumbersCharacterSet;
@property (readonly, nonatomic) NSCharacterSet *nonPhoneNumbersCharacterSet;
@property (readonly, nonatomic) NSCharacterSet *phoneNumbersIgnoredCharacterSet;

- (id)init;
- (void).cxx_destruct;
- (id)canonicalizedPhoneNumber:(id)a0;

@end
