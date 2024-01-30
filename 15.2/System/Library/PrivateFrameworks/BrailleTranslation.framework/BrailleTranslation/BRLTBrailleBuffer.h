@class BRLTBrailleString;

@interface BRLTBrailleBuffer : NSObject <NSCopying> {
    BRLTBrailleString *_brailleString;
}

@property (readonly, nonatomic) BRLTBrailleString *brailleString;
@property (nonatomic) unsigned long long cursor;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBrailleString:(id)a0;
- (void)insertBrailleChar:(id)a0;
- (void)deleteBrailleChar;

@end
