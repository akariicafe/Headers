@class NSArray;

@interface TILexicon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *entries;

+ (id)lexiconWithEntries:(id)a0;
+ (void)requestLexiconFromBundlePath:(id)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
