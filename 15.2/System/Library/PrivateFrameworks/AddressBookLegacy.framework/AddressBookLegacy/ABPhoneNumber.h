@class NSString;

@interface ABPhoneNumber : NSObject {
    struct { char *internationalCallingCode; char *nationalPrefix; char *carrierCode; unsigned int carrierCodeLen; char *areaCode; unsigned int areaCodeLen; char *number; unsigned int numberLen; } _decomposedPhoneNumber;
    char *_phoneNumberBytes;
}

@property (readonly) struct { char *x0; char *x1; char *x2; unsigned int x3; char *x4; unsigned int x5; char *x6; unsigned int x7; } *decomposedPhoneNumberPointer;
@property (readonly) NSString *lastFour;
@property (readonly) NSString *originalStringValue;
@property (readonly) char *normalizedPhoneChars;

- (id)initWithPhoneNumberString:(id)a0 countryCode:(id)a1;
- (struct { char *x0; char *x1; char *x2; unsigned int x3; char *x4; unsigned int x5; char *x6; unsigned int x7; } *)decomposedPhoneNumberPointer;
- (void)dealloc;

@end
