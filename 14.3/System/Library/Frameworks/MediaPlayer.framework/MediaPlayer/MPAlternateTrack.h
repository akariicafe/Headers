@class NSString, AVMediaSelectionOption;

@interface MPAlternateTrack : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) AVMediaSelectionOption *option;
@property (readonly, nonatomic) BOOL isMainProgram;
@property (readonly, nonatomic) BOOL isDVS;
@property (readonly, nonatomic) NSString *canonicalLanguageIdentifier;

+ (id)threeCharCodesForEncodedISO639_2_T:(id)a0;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithOption:(id)a0;
- (void)_setDisplayNameFromOption:(id)a0;

@end
