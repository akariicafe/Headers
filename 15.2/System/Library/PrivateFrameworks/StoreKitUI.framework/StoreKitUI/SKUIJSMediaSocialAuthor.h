@class NSString, NSArray, NSDictionary, SKUIMediaSocialAuthor;

@interface SKUIJSMediaSocialAuthor : NSObject <SKUIJSMediaSocialAuthor> {
    SKUIMediaSocialAuthor *_mediaSocialAuthor;
}

@property (readonly, nonatomic) NSString *dsId;
@property (readonly, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) NSString *entityType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *permissions;
@property (readonly, nonatomic) NSDictionary *storePlatformData;

- (void).cxx_destruct;
- (id)initWithSKUIMediaSocialAuthor:(id)a0;

@end
