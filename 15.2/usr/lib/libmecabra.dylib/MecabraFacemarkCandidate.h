@class NSString;

@interface MecabraFacemarkCandidate : NSObject

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *category;

+ (id)copyFacemarkCandidatesForLocale:(id)a0;
+ (id)copyFacemarkCandidatesForLanguage:(int)a0;
+ (id)candidateWithString:(id)a0 category:(id)a1;

- (id)surface;
- (id)description;
- (void)dealloc;
- (id)initWithString:(id)a0 category:(id)a1;

@end
