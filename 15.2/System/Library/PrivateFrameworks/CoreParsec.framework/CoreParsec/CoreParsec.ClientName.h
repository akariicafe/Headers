@class NSString;

@interface CoreParsec.ClientName : NSObject

@property (class, nonatomic, readonly) NSString *Safari;
@property (class, nonatomic, readonly) NSString *Spotlight;
@property (class, nonatomic, readonly) NSString *Siri;
@property (class, nonatomic, readonly) NSString *Lookup;
@property (class, nonatomic, readonly) NSString *Messages;
@property (class, nonatomic, readonly) NSString *News;
@property (class, nonatomic, readonly) NSString *Parsecd;
@property (class, nonatomic, readonly) NSString *ParsecTool;
@property (class, nonatomic, readonly) NSString *CoreSuggestions;
@property (class, nonatomic, readonly) NSString *FlightUtilities;
@property (class, nonatomic, readonly) NSString *MapsSuggestions;
@property (class, nonatomic, readonly) NSString *Mail;
@property (class, nonatomic, readonly) NSString *VisualIntelligence;
@property (class, nonatomic, readonly) NSString *Trystero;
@property (class, nonatomic, readonly) NSString *DuetExpert;
@property (class, nonatomic, readonly) NSString *ReverseTemplated;
@property (class, nonatomic, readonly) NSString *MediaAnalysisd;
@property (class, nonatomic, readonly) NSString *NotificationsLogging;

+ (id)extractClientNameFromUserAgent:(id)a0 allowAbbreviation:(BOOL)a1;
+ (id)extractClientNameFromString:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
