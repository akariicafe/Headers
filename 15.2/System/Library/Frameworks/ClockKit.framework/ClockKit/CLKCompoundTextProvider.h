@class NSString, NSMutableArray;

@interface CLKCompoundTextProvider : CLKTextProvider {
    NSMutableArray *_textProviders;
    NSMutableArray *_segments;
    NSString *_sessionCacheKey;
}

+ (BOOL)supportsSecureCoding;
+ (id)compoundProviderWithLocalizedFormat:(id)a0 localizedTextProviders:(id)a1;
+ (id)compoundTextProviderCurrentlyFormattingOnThisThread;

- (void)_endSession;
- (long long)_updateFrequency;
- (void)encodeWithCoder:(id)a0;
- (void)_startSessionWithDate:(id)a0;
- (BOOL)_validate;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFormat:(id)a0 arguments:(char *)a1;
- (unsigned long long)hash;
- (id)JSONObjectRepresentation;
- (long long)timeTravelUpdateFrequency;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (void)_processFormat:(id)a0 arguments:(char *)a1;
- (id)initWithSegments:(id)a0 textProviders:(id)a1;
- (id)_sessionCacheKey;
- (id)_attributedStringForSegment:(id)a0 withStyle:(id)a1;
- (id)_replacementForTextProvider:(id)a0 index:(unsigned long long)a1 withStyle:(id)a2;
- (id)_arrayOfTextProviderJSONObjectRepresentations;
- (void)addTextProvider:(id)a0 andGetPlaceholderString:(id *)a1;

@end
