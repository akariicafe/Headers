@class NSString, NSArray;

@interface NFRunScriptParametersInternal : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *seid;
@property (nonatomic) BOOL checkWhitelist;
@property (retain, nonatomic) NSArray *whitelistedAID;
@property (nonatomic) BOOL initialSelectBeforeRun;
@property (nonatomic) BOOL includeAPDUDuration;
@property (nonatomic) BOOL deactivateAllApps;
@property (nonatomic) double outTotalAPDUExecutionDuration;
@property (nonatomic) unsigned long long outFinalSWStatus;
@property (nonatomic) BOOL toSystemOS;
@property (nonatomic) BOOL disableCompletionNotification;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
