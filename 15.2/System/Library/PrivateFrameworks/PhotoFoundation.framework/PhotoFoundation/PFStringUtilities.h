@interface PFStringUtilities : NSObject

+ (id)hexStringForData:(id)a0;
+ (id)stringByRemovingInvalidXMLCharactersFromString:(id)a0;
+ (id)dataForHexString:(id)a0;
+ (id)dataForBase64String:(id)a0;
+ (id)hexToBase64MapForHexStrings:(id)a0;
+ (id)base64ToHexMapForHexStrings:(id)a0;
+ (BOOL)isValidHexString:(id)a0;
+ (const char *)safeCString:(id)a0;
+ (id)hexToBase64MapForBase64Strings:(id)a0;
+ (id)base64ToHexMapForBase64Strings:(id)a0;
+ (id)mapCollection:(id)a0 transformation:(id /* block */)a1;
+ (id)LTRString:(id)a0;
+ (id)descriptionForTimeInterval:(double)a0;
+ (id)descriptionForNSInterval:(unsigned long long)a0;
+ (id)descriptionForMachTimeInterval:(unsigned long long)a0;

@end
