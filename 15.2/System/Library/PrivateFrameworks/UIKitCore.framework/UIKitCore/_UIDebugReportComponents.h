@class NSString;

@interface _UIDebugReportComponents : NSObject

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *footer;

- (void).cxx_destruct;
- (id)init;

@end
