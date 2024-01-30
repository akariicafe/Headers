@class NSString, NSArray;

@interface SFPrivacyReportWebsiteDetailSection : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *trackers;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 trackers:(id)a1;

@end
