@class NSString;

@interface MCEncryptedProfileServicePayload : MCPayload {
    NSString *_urlString;
}

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (id)title;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithURLString:(id)a0 profile:(id)a1;
- (id)subtitle1Description;
- (id)subtitle1Label;

@end
