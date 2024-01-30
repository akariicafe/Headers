@class NSString;

@interface AUPasscodeCodecCommandLineOption : NSObject

@property (readonly, nonatomic) NSString *optionSyntax;
@property (readonly, nonatomic) NSString *optionDescription;

+ (id)optionWithSyntax:(id)a0 description:(id)a1;

- (void).cxx_destruct;
- (id)initWithSyntax:(id)a0 description:(id)a1;

@end
