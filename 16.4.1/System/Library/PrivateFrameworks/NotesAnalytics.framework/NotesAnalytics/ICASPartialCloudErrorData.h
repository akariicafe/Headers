@class NSString, NSArray;

@interface ICASPartialCloudErrorData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSArray *partialErrorSummary;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithPartialErrorSummary:(id)a0;

@end
