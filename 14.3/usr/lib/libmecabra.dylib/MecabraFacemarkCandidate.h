@class NSString;

@interface MecabraFacemarkCandidate : NSObject

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *category;

+ (id)copyFacemarkCandidatesForLocale:(id)a0;
+ (id)copyFacemarkCandidatesForLanguage:(int)a0;
+ (id)candidateWithString:(id)a0 category:(id)a1;

- (void)dealloc;
- (id)surface;
- (id)description;
- (id)initWithString:(id)a0 category:(id)a1;

@end
