@class NSArray, NSDate;
@protocol FCSectionProviding;

@interface FCEditorialOperationGroup : NSObject

@property (retain, nonatomic) id<FCSectionProviding> section;
@property (retain, nonatomic) NSArray *headlines;
@property (retain, nonatomic) NSDate *publishDate;

- (void).cxx_destruct;

@end
