@class NSString, NSArray;

@interface NFReaderSessionConfig : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long uiMode;
@property (readonly, nonatomic) unsigned long long sessionType;
@property (readonly, copy, nonatomic) NSString *initialScanText;
@property (readonly, copy, nonatomic) NSArray *vasPasses;

+ (id)sessionConfigWithUIMode:(unsigned long long)a0 sessionType:(unsigned long long)a1 initialScanText:(id)a2 vasPass:(id)a3;
+ (id)sessionTypeString:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
