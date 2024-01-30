@interface SFPrivacyReportItem : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id userInfo;

- (id)initWithType:(long long)a0 userInfo:(id)a1;
- (id)initWithType:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
