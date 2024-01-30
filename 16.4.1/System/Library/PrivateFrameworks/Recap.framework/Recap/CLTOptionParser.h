@class NSArray, NSString, CLTOption, NSMutableArray;

@interface CLTOptionParser : NSObject

@property (retain, nonatomic) NSArray *inputArguments;
@property (retain, nonatomic) NSMutableArray *options;
@property (readonly, nonatomic) NSString *versionLine;
@property (retain, nonatomic) NSString *toolName;
@property (retain, nonatomic) NSString *versionString;
@property (retain, nonatomic) NSString *introductionaryDescription;
@property (retain, nonatomic) NSString *usageOptionsDescription;
@property (nonatomic) BOOL succeedWithoutArguments;
@property (nonatomic) BOOL succeedWithUnkownFlags;
@property (retain, nonatomic) NSArray *additionalHelpLines;
@property (retain, nonatomic) CLTOption *defaultHelpOption;
@property (retain, nonatomic) CLTOption *defaultVersionOption;
@property (retain, nonatomic) NSArray *remainingArguments;

- (id)parse;
- (id)usageString;
- (id)init;
- (void).cxx_destruct;
- (void)addOption:(id)a0;
- (id)helpString;
- (id)initWithArguments:(id)a0;
- (int)parseWithSuccessHandler:(id /* block */)a0;
- (void)removeAllOptions;
- (id)usageLine;

@end
