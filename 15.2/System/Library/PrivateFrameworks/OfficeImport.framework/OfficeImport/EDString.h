@class NSString, EDPhoneticInfo, EDRunsCollection;

@interface EDString : NSObject <NSCopying, EDImmutableObject> {
    NSString *mString;
    EDRunsCollection *mRuns;
    EDPhoneticInfo *mPhoneticInfo;
    BOOL mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)string;
+ (id)edStringWithString:(id)a0;
+ (id)edStringWithString:(id)a0 runs:(id)a1;

- (BOOL)isEqualToString:(id)a0;
- (id)initWithString:(id)a0;
- (id)string;
- (id)runs;
- (void)setString:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendString:(id)a0;
- (void)prependString:(id)a0;
- (void)setRuns:(id)a0;
- (BOOL)areThereRuns;
- (id)firstRunFont;
- (id)firstRunEffects;
- (void)setDoNotModify:(BOOL)a0;
- (id)initWithString:(id)a0 runs:(id)a1;
- (BOOL)isEqualToEDString:(id)a0;
- (void)removeCharacterAtIndex:(unsigned long long)a0;
- (void)removeCharactersInSet:(id)a0;
- (id)phoneticInfo;
- (void)setPhoneticInfo:(id)a0;
- (id)firstFont;

@end
