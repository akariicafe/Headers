@class NSString, UIFont;

@interface PRTimeFontConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *timeFontIdentifier;
@property (readonly, copy, nonatomic) UIFont *customFont;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimeFontIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCustomFont:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
