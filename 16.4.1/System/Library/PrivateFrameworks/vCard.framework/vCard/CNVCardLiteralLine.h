@class NSData;

@interface CNVCardLiteralLine : CNVCardLine {
    NSData *_literalValue;
}

+ (id)lineWithLiteralValue:(id)a0;

- (void).cxx_destruct;
- (id)initWithLiteralValue:(id)a0;
- (void)serializeWithStrategy:(id)a0;

@end
