@interface SFSHA224DigestOperation_Ivars : NSObject {
    struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } context;
}

@end
