@class NSString, NSLocale;

@interface MPAlternateTextTrack : MPAlternateTrack {
    long long _type;
    NSString *_name;
    NSLocale *_locale;
}

@property (readonly, nonatomic) BOOL isInBand;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) long long type;
@property (nonatomic) long long tag;

+ (id)autoTrack;
+ (id)offTrack;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 name:(id)a1 locale:(id)a2;
- (id)_displayNameForName:(id)a0;
- (id)displayName;

@end
