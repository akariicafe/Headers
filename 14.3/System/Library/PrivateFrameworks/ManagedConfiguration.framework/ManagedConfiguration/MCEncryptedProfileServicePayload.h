@class NSString;

@interface MCEncryptedProfileServicePayload : MCPayload {
    NSString *_urlString;
}

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)initWithURLString:(id)a0 profile:(id)a1;
- (id)title;

@end
