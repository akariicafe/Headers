@class NSString, FBKInstalledApp;

@interface FBKAppQuestionChoice : FBKQuestionChoice <NSSecureCoding>

@property (class, nonatomic, readonly) NSString *otherAppChoiceValue;
@property (class, readonly, nonatomic) NSString *otherAppChoiceValue;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) FBKInstalledApp *app;


- (void).cxx_destruct;

@end
