@class NSURL, NSString, SKUIReportAConcernReason;

@interface SKUIReportAConcernMetadata : NSObject

@property (copy, nonatomic) NSURL *reportConcernURL;
@property (nonatomic) long long itemIdentifier;
@property (retain, nonatomic) SKUIReportAConcernReason *selectedReason;
@property (copy, nonatomic) NSString *details;

- (void).cxx_destruct;

@end
