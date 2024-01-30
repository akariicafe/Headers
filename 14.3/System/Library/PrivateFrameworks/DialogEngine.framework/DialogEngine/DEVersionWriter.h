@class NSData;

@interface DEVersionWriter : NSObject <DEWriter>

@property (nonatomic) struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } context;
@property (retain, nonatomic) NSData *version;

+ (id)dataWithHexString:(id)a0;
+ (id)versionString:(id)a0;
+ (id)versionToString:(id)a0;
+ (BOOL)prepareDirsFor:(id)a0;
+ (id)versionFile:(id)a0;
+ (id)getURLFor:(id)a0 version:(id)a1 base:(id)a2;
+ (id)versionData:(id)a0;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)writeData:(id)a0;

@end
