@class NSArray, NSMutableOrderedSet;

@interface UIPasteConfiguration : NSObject <NSSecureCoding, NSCopying> {
    NSMutableOrderedSet *_acceptableTypes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *acceptableTypes;
@property (copy, nonatomic) NSArray *acceptableTypeIdentifiers;

+ (id)_pasteConfigurationForAcceptingClasses:(id)a0;
+ (id)pasteConfigurationForAcceptingClasses:(id)a0;
+ (id)pasteConfigurationWithAcceptableTypes:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAcceptableTypes:(id)a0;
- (void)addTypeIdentifiersForAcceptingClass:(Class)a0;
- (id)acceptableTypes;
- (id)initWithAcceptableTypeIdentifiers:(id)a0;
- (void)setAcceptableTypeIdentifiers:(id)a0;
- (void)addAcceptableTypeIdentifiers:(id)a0;
- (id)initWithTypeIdentifiersForAcceptingClass:(Class)a0;
- (void)setAcceptableTypes:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)acceptableTypeIdentifiers;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
