@class NSArray, NSString;
@protocol CNCancelable;

@interface SearchUIAvatarImage : SearchUIImage

@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (retain, nonatomic) NSString *letters;
@property (retain, nonatomic) id<CNCancelable> renderingToken;

+ (id)avatarImageRenderer;

- (void).cxx_destruct;
- (void)setDefaultSizeIfNecessary;
- (id)initWithMonogramImage:(id)a0;
- (id)initWithContactImage:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)defaultCornerRoundingStyle;
- (void)loadImageWithCompletionHandler:(id /* block */)a0;

@end
