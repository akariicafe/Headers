@class NSUUID, TIDocumentState;

@interface TICandidateRequestToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) TIDocumentState *documentState;
@property (readonly, nonatomic) int shiftState;

+ (id)tokenForKeyboardState:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initForKeyboardState:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSameRequestAs:(id)a0;
- (unsigned long long)hash;
- (id)shortIdentifier;

@end
