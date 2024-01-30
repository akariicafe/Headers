@class NSString, NSArray, NSMutableArray;

@interface BRLTBrailleString : NSObject <NSCopying> {
    NSMutableArray *_brailleChars;
}

@property (readonly, nonatomic) NSString *unicode;
@property (readonly, nonatomic) NSArray *brailleChars;
@property (readonly, nonatomic) unsigned long long length;

+ (id)brfToUnicode:(id)a0;
+ (id)brfTable;
+ (id)unicodeToBestEffortBrf:(id)a0;
+ (BOOL)isValidBRF:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithBrailleChars:(id)a0;
- (id)initWithUnicode:(id)a0;
- (id)bestEffortBrf;
- (BOOL)isEqualToBrailleString:(id)a0;
- (id)initWithBrf:(id)a0;

@end
