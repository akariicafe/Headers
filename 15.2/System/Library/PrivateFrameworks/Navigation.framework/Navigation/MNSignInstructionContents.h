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

+ (id)contentsWithStep:(id)a0 destination:(id)a1;

@end
