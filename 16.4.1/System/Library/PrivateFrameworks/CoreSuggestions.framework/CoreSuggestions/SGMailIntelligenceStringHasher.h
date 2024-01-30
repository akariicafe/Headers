@class NSData;

@interface SGMailIntelligenceStringHasher : NSObject {
    NSData *_salt;
}

@property (retain, nonatomic) NSData *rotatingSalt;

+ (long long)hashedString:(id)a0 salts:(id)a1;
+ (id)rotatingSaltForDate:(id)a0;
+ (long long)truncatedSHA256:(id)a0 salts:(id)a1;

- (long long)truncatedSHA256:(id)a0;
- (id)initWithSaltValue:(id)a0;
- (long long)hashedString:(id)a0;
- (long long)unrotatedHashedString:(id)a0 withHashSize:(unsigned long long)a1;
- (id)unrotatedHashedStrings:(id)a0 withHashSize:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (long long)hashedUserId;

@end
