@class NSSet, NSIndexSet;

@interface TSKStructuredTextImportSettings : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long startingRow;
@property (copy, nonatomic) NSSet *decimalSeparators;
@property (copy, nonatomic) NSSet *thousandsSeparators;
@property (nonatomic) BOOL transposeRowsAndColumns;
@property (copy, nonatomic) NSSet *delimiters;
@property (nonatomic) BOOL automaticDelimiters;
@property (copy, nonatomic) NSSet *textQualifiers;
@property (nonatomic) BOOL collapseConsecutiveDelimiters;
@property (copy, nonatomic) NSIndexSet *columnOffsets;
@property (nonatomic) BOOL automaticOffsets;
@property (nonatomic) unsigned long long sourceEncoding;
@property (readonly, nonatomic) BOOL hasAnyAutomaticSettings;

+ (id)settings;
+ (id)keyPathsForValuesAffectingIsValid;
+ (id)settingsFromArchive:(const void *)a0;
+ (id)settingsWithType:(long long)a0;

- (id)initWithType:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)errorString;
- (void)encodeToArchive:(void *)a0;
- (id)initFromArchive:(const void *)a0;

@end
