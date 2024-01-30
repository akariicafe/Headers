@class NSArray, NSString;
@protocol CNCancelable;

@interface SearchUIAvatarImage : SearchUIImage

@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (retain, nonatomic) NSString *letters;
@property (retain) id<CNCancelable> renderingToken;

+ (id)avatarImageRenderer;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (int)defaultCornerRoundingStyle;
- (id)initWithContactImage:(id)a0;
- (id)initWithMonogramImage:(id)a0;
- (void)setDefaultSizeIfNecessary;

@end
