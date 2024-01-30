@class NSString, NSMutableArray;

@interface CLKCompoundTextProvider : CLKTextProvider {
    NSMutableArray *_textProviders;
    NSMutableArray *_segments;
    NSString *_sessionCacheKey;
}

+ (BOOL)supportsSecureCoding;
+ (id)compoundProviderWithLocalizedFormat:(id)a0 localizedTextProviders:(id)a1;
+ (id)compoundTextProviderCurrentlyFormattingOnThisThread;

- (id)initWithFormat:(id)a0 arguments:(char *)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)_validate;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)_endSession;
- (void)_startSessionWithDate:(id)a0;
- (long long)_updateFrequency;
- (void)encodeWithCoder:(id)a0;
- (long long)timeTravelUpdateFrequency;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (void)_processFormat:(id)a0 arguments:(char *)a1;
- (id)initWithSegments:(id)a0 textProviders:(id)a1;
- (id)_sessionCacheKey;
- (id)_attributedStringForSegment:(id)a0 withStyle:(id)a1;
- (id)_replacementForTextProvider:(id)a0 index:(unsigned long long)a1 withStyle:(id)a2;
- (id)_arrayOfTextProviderJSONObjectRepresentations;
- (void)addTextProvider:(id)a0 andGetPlaceholderString:(id *)a1;

@end
