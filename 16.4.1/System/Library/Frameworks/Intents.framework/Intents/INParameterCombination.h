@class NSString, INCodableLocalizationTable;

@interface INParameterCombination : NSObject <NSSecureCoding, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable;
@property (nonatomic, getter=isPrimary) BOOL primary;
@property (nonatomic) BOOL supportsBackgroundExecution;
@property (copy, nonatomic) NSString *titleFormatString;
@property (copy, nonatomic) NSString *titleFormatStringLocID;
@property (copy, nonatomic) NSString *subtitleFormatString;
@property (copy, nonatomic) NSString *subtitleFormatStringLocID;
@property (readonly, copy, nonatomic) NSString *localizedTitleFormatString;
@property (readonly, copy, nonatomic) NSString *localizedSubtitleFormatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)localizedSubtitleFormatStringWithLocalizer:(id)a0;
- (id)localizedTitleFormatStringWithLocalizer:(id)a0;
- (void).cxx_destruct;

@end
