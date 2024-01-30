@class NSURL, NSError, NSNumber, NSData;

@interface AMFIPathValidator_ios : NSObject {
    NSURL *_url;
    NSNumber *_offset;
    int _flags;
    BOOL _validated;
    unsigned long long _bootargs;
    NSData *_cdhash;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned int signerType;
@property (readonly, nonatomic) BOOL areEntitlementsValidated;

- (BOOL)validateWithError:(id *)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 withFileOffset:(unsigned long long)a1 withFlags:(int)a2;
- (id)initWithURL:(id)a0 withFileOffset:(unsigned long long)a1;
- (id)initWithURL:(id)a0 withFlags:(int)a1;
- (id)initWithURL:(id)a0 withFileOffsetAsNumber:(id)a1 withFlags:(int)a2;
- (BOOL)computedCdHash:(unsigned char[20])a0;
- (int)isSignerType;

@end
