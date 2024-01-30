@class WBSPasswordEvaluation, NSString, NSArray, WBSSavedPassword;

@interface WBSPasswordWarning : NSObject {
    WBSPasswordEvaluation *_weakPasswordEvaluation;
    NSArray *_localizedLongDescriptionStrings;
}

@property (nonatomic) unsigned long long severityScore;
@property (readonly, nonatomic) WBSSavedPassword *password;
@property (readonly, nonatomic) unsigned long long issueTypes;
@property (readonly, nonatomic) unsigned long long severity;
@property (readonly, nonatomic) unsigned long long hashForUserAcknowlegement;
@property (readonly, nonatomic) BOOL shouldShowWarningsWhenLoggingIn;
@property (readonly, nonatomic) NSString *localizedShortDescription;
@property (readonly, nonatomic) NSString *localizedTitleForWarningWhenLoggingIn;
@property (readonly, nonatomic) NSString *localizedInformationTextForWarningWhenLoggingIn;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithPassword:(id)a0 issueTypes:(unsigned long long)a1 weakPasswordEvaluation:(id)a2 longDescriptionStrings:(id)a3 shortDescription:(id)a4;
- (id)localizedLongDescriptionForClient:(unsigned long long)a0;

@end
