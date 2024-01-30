@class NSString;

@interface MCEncryptedProfileServicePayload : MCPayload {
    NSString *_urlString;
}

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)title;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)initWithURLString:(id)a0 profile:(id)a1;
- (void).cxx_destruct;
- (id)verboseDescription;

@end
