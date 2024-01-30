@class NSString, NSUUID, NSSet, NSNumber;

@interface AXVoiceOverActivity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSSet *textualContexts;
@property (retain, nonatomic) NSSet *appIdentifiers;
@property (retain, nonatomic) NSUUID *punctuationGroup;
@property (retain, nonatomic) NSNumber *tableHeaders;
@property (retain, nonatomic) NSNumber *tableRowAndColumn;
@property (retain, nonatomic) NSNumber *speakEmojis;
@property (retain, nonatomic) NSNumber *containerFeedback;
@property (retain, nonatomic) NSNumber *imageDescriptions;
@property (retain, nonatomic) NSNumber *hints;
@property (retain, nonatomic) NSString *voiceIdentifier;
@property (retain, nonatomic) NSNumber *speechRate;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSNumber *speechMuted;
@property (retain, nonatomic) NSNumber *soundMuted;
@property (retain, nonatomic) NSNumber *audioDucking;
@property (retain, nonatomic) NSNumber *modifierKeys;
@property (retain, nonatomic) NSNumber *brailleStatusCellGeneral;
@property (retain, nonatomic) NSNumber *brailleStatusCellText;
@property (retain, nonatomic) NSString *brailleTable;
@property (retain, nonatomic) NSNumber *brailleOutput;
@property (retain, nonatomic) NSNumber *brailleInput;
@property (retain, nonatomic) NSNumber *brailleAutoAdvanceDuration;
@property (nonatomic) BOOL builtIn;

+ (id)observerKeys;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)identicalProperty:(id)a0 property2:(id)a1;
- (BOOL)isIdenticalTo:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
