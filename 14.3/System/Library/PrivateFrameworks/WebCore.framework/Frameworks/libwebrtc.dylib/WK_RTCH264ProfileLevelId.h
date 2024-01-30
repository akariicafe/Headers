@class NSString;

@interface WK_RTCH264ProfileLevelId : NSObject

@property (nonatomic) unsigned long long profile;
@property (nonatomic) unsigned long long level;
@property (retain, nonatomic) NSString *hexString;

- (void).cxx_destruct;
- (id)initWithHexString:(id)a0;
- (id)initWithProfile:(unsigned long long)a0 level:(unsigned long long)a1;

@end
