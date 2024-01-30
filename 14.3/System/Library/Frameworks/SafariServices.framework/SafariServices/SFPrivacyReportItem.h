@interface SFPrivacyReportItem : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id userInfo;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 userInfo:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithType:(long long)a0;
- (BOOL)isEqual:(id)a0;

@end
