@class NSString, NSNumber;

@interface CTVoicemailInfoType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL available;
@property (retain, nonatomic) NSNumber *count;
@property (nonatomic) BOOL isNetworkOriginated;
@property (nonatomic) BOOL isVoiceMailMWI;

- (id)initWithParam:(id)a0 available:(BOOL)a1 count:(id)a2 isNetworkOriginated:(BOOL)a3 isVoiceMailMWI:(BOOL)a4;
- (BOOL)isEqualToCTVoicemailInfoType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
