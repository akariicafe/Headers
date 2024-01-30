@interface HashHelper : NSObject {
    struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } ctx;
}

- (id)init;

@end
