@class NSString, PKPrintSettings, NSURL, NSDate, NSData;

@interface PKJob : NSObject

@property (nonatomic) long long number;
@property (nonatomic) long long remoteJobId;
@property (nonatomic) long long mediaProgress;
@property (nonatomic) long long mediaSheets;
@property (nonatomic) long long mediaSheetsCompleted;
@property (retain, nonatomic) NSURL *printerURI;
@property (retain, nonatomic) NSString *printerDisplayName;
@property (nonatomic) long long printerKind;
@property (retain, nonatomic) NSString *printerLocation;
@property (retain, nonatomic) PKPrintSettings *settings;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSDate *timeAtCompleted;
@property (retain, nonatomic) NSDate *timeAtCreation;
@property (retain, nonatomic) NSDate *timeAtProcessing;
@property (retain, nonatomic) NSData *thumbnailImage;
@property (readonly, nonatomic) NSString *localizedStatusString;
@property (readonly, nonatomic) NSString *localizedJobOptions;
@property (retain, nonatomic) NSString *PIN;

+ (id)jobs;
+ (id)currentJob;

- (long long)cancel;
- (long long)update;

@end
