@class WBSPasswordEvaluation, NSString, NSArray, WBSSavedPassword;

@interface WBSPasswordWarning : NSObject {
    WBSPasswordEvaluation *_weakPasswordEvaluation;
    NSArray *_domainsWithReusedPassword;
}

@property (nonatomic) unsigned long long severityScore;
@property (readonly, nonatomic) WBSSavedPassword *savedPassword;
@property (readonly, nonatomic) unsigned long long issueTypes;
@property (readonly, nonatomic) unsigned long long severity;
@property (readonly, nonatomic) unsigned long long hashForUserAcknowlegement;
@property (readonly, nonatomic) BOOL shouldShowWarningsWhenLoggingIn;
@property (readonly, nonatomic) NSString *localizedShortDescriptivePhrase;
@property (readonly, nonatomic) NSString *localizedShortDescriptionOfProblemType;
@property (readonly, nonatomic) NSString *localizedInformationTextForWarningWhenLoggingIn;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_localizedShortDescriptionWithFullDescriptivePhrase:(BOOL)a0;
- (unsigned long long)_passwordVisibilityForClient:(unsigned long long)a0;
- (id)_localizedLongWarningStringsForClient:(unsigned long long)a0;
- (id)initWithPassword:(id)a0 issueTypes:(unsigned long long)a1 weakPasswordEvaluation:(id)a2 domainsWithReusedPassword:(id)a3;
- (id)localizedLongDescriptionForClient:(unsigned long long)a0;

@end
