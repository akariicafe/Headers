@class NSString, UIImage;

@interface TUVideoEffect : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) UIImage *thumbnailImage;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 thumbnailImage:(id)a1;
- (BOOL)isEqualToEffect:(id)a0;

@end
