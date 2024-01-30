@class NSString;

@interface TISupplementalPhraseItem : TISupplementalItem

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *phoneticTitle;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 phoneticTitle:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
