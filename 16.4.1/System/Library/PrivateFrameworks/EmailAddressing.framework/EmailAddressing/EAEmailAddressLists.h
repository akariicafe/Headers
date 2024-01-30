@interface EAEmailAddressLists : NSObject

+ (id)addressListFromHeaderValue:(id)a0;
+ (id)addressDisplayStringWithMaxNumberOfAddresses:(unsigned long long)a0 fromAddressList:(id)a1;
+ (id)addressListFromAddressString:(id)a0;
+ (id)addressStringFromAddressList:(id)a0;
+ (id)componentsSeparatedByCharactersRespectingQuotesAndParens:(id)a0 forString:(id)a1;
+ (id)componentsSeparatedByCommaRespectingQuotesAndParensForString:(id)a0;
+ (id)displayNameFromAddressList:(id)a0;
+ (id)rawAddressListFromFullAddressList:(id)a0;

@end
