@interface CNVCardPHOTOParser : NSObject

+ (id)clipRectInfoFromString:(id)a0;
+ (void)parseBase64:(BOOL)a0 parser:(id)a1 callback:(id /* block */)a2;
+ (id)parseClipRectsWithParser:(id)a0;

@end
