@class NSString, NSDate;

@interface BLSHTapToRadarDescriptor : NSObject

@property (readonly, nonatomic) unsigned long long designation;
@property (readonly, nonatomic) NSString *radarTitle;
@property (readonly, nonatomic) NSString *radarDescription;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *classification;
@property (copy, nonatomic) NSString *reproducibility;
@property (copy, nonatomic) NSString *keywordIDs;
@property (copy, nonatomic) NSString *attachments;
@property (nonatomic) long long componentID;
@property (copy, nonatomic) NSString *componentName;
@property (copy, nonatomic) NSString *componentVersion;
@property (copy, nonatomic) NSString *ttrPromptHeader;
@property (copy, nonatomic) NSString *ttrPromptMessage;
@property (copy, nonatomic) NSString *ttrDisplayReason;
@property (copy, nonatomic) NSDate *timeOfIssue;

- (void).cxx_destruct;
- (id)initWithDesignation:(unsigned long long)a0 radarTitle:(id)a1 radarDescription:(id)a2;
- (id)toURL;

@end
