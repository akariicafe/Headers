@class NSString, UIFont;

@interface AVMobileImageConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL prefersWesternLatinDigits;

- (id)imageName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithString:(id)a0 font:(id)a1;
- (id)initWithImageName:(id)a0 font:(id)a1 prefersWesternLatinDigits:(BOOL)a2;

@end
