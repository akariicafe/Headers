@class NSString, NSArray, NSURL;

@interface INDeferredLocalizedString : NSString

@property (readonly, copy, nonatomic) NSString *_formatKey;
@property (readonly, copy, nonatomic) NSString *_table;
@property (readonly, copy, nonatomic) NSArray *_arguments;
@property (readonly, copy, nonatomic) NSString *_bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *_bundleURL;
@property (readonly, copy, nonatomic) NSString *_cachedLocalization;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_intents_encodeForProto;
- (id)initWithDeferredFormat:(id)a0 fromTable:(id)a1 bundle:(id)a2 arguments:(char *)a3;
- (id)initWithDeferredFormat:(id)a0 fromTable:(id)a1 bundleIdentifier:(id)a2 bundleURL:(id)a3 arguments:(id)a4;
- (id)localizeForLanguage:(id)a0;

@end
