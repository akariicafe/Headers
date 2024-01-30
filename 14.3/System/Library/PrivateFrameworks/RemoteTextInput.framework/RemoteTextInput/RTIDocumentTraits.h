@class NSString, NSArray, TITextInputTraits, NSIndexSet, NSDictionary;

@interface RTIDocumentTraits : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *localizedAppName;
@property (retain, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) TITextInputTraits *textInputTraits;
@property (retain, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } validTextRange;
@property (nonatomic) unsigned long long autofillMode;
@property (retain, nonatomic) NSDictionary *autofillContext;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)copyContextualPropertiesFromDocumentTraits:(id)a0;

@end
