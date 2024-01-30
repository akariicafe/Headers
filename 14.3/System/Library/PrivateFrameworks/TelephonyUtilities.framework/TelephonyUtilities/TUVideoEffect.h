@class NSString, UIImage;

@interface TUVideoEffect : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) UIImage *thumbnailImage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 thumbnailImage:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqualToEffect:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
