@class NSArray, NSString;

@interface MNSignInstructionContents : MNListInstructionContents <MNInstructionContents>

@property (retain, nonatomic) NSArray *mergeFormats;
@property (retain, nonatomic) NSArray *continueFormats;
@property (retain, nonatomic) NSArray *maneuverFormats;
@property (readonly, nonatomic) long long context;
@property (nonatomic) BOOL suppressNames;
@property (retain, nonatomic) NSString *roadName;
@property (readonly, nonatomic) BOOL hasServerContent;
@property (nonatomic) BOOL suppressFallback;

+ (id)contentsWithStep:(id)a0 transportType:(int)a1 destination:(id)a2;

@end
