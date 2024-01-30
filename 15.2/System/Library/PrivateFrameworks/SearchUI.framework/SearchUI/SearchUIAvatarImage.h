@class NSArray, NSString;
@protocol CNCancelable;

@interface SearchUIAvatarImage : SearchUIImage

@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (retain, nonatomic) NSString *letters;
@property (retain, nonatomic) id<CNCancelable> renderingToken;

+ (id)avatarImageRenderer;

- (int)defaultCornerRoundingStyle;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setDefaultSizeIfNecessary;
- (id)initWithMonogramImage:(id)a0;
- (id)initWithContactImage:(id)a0;

@end
